#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num) {

    //1. 새로운 원소 생성
    dat[unused] = num;   // unused 위치가 가리키는 위치가 새로운 원소 생성 위치
    //2. 새 원소의 pre 값에 삽입할 위치의 주소 대입
    pre[unused] = addr;
    //3. 새 원소의 nxt 값에 삽입할 위치의 nxt 값을 대입
    nxt[unused] = nxt[addr];
    //4. 삽입할 위치의 nxt값과 삽입할 위치의 다음 원소의 pre 값을 새원소로 lg변경
    if (nxt[addr] != -1)
    {
        pre[nxt[addr]] = unused;
    }
    nxt[addr] = unused;
    //5. unused 1증가
    unused++;
}

void erase(int addr) {

    nxt[pre[addr]] = nxt[addr];

    if (nxt[addr] != -1)
    {
        pre[nxt[addr]] = pre[addr];
    }
    



    unused--;
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test() {
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test() {
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert_test();
    erase_test();
}