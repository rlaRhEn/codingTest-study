#include<iostream>
#include<string>
using namespace std;



int main(void) //���� ����
{
	int A, B, C;
	
	cin >> A >> B >> C;


	int multi = A * B * C;
	string s = to_string(multi); //���ڷ� ��ȯ
		for (int i = 0; i < 10; i++)
		{
			int cnt = 0; //ī��Ʈ 0�ʱ�ȭ
			for (char a : s)
			{
				if (a == i + '0') //�ƽ�Ű �ڵ� 0�߰�
				{
					cnt++;
				}
			}
			cout << cnt << endl;
		}
	return 0;
}