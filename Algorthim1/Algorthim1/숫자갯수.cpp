#include<iostream>
#include<string>
using namespace std;



int main(void) //숫자 세기
{
	int A, B, C;
	
	cin >> A >> B >> C;


	int multi = A * B * C;
	string s = to_string(multi); //문자로 변환
		for (int i = 0; i < 10; i++)
		{
			int cnt = 0; //카운트 0초기화
			for (char a : s)
			{
				if (a == i + '0') //아스키 코드 0추가
				{
					cnt++;
				}
			}
			cout << cnt << endl;
		}
	return 0;
}