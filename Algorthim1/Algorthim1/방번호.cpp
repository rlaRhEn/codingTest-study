#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int plasticArr[10];

int main()
{
	int num; //방번호

	cin >> num;
	string s = to_string(num); //문자열 변환

	for (char a : s) 
	{
		int digit = a - '0';
		if (digit == 6 || digit == 9)
		{
			plasticArr[6]++;
		}
		else 
		{
			plasticArr[digit]++;
		}
	}

	plasticArr[6] = ceil(plasticArr[6] / 2.0);

	int total = 0;
	for (int i = 0; i < 9; i++)
	{
		total = max(total, plasticArr[i]);
	}

	cout << total;
}