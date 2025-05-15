// Algorthim1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<math.h>


using namespace std;
int Func1(int n);
int Func2(int arr[], int n);
int Func3(int n);
int Func4(int n);




int main()
{
	//cout << Func2({1, 52 ,48}, 3) << endl;
	//cout << Func3(9) << endl;
	//cout << Func3(693953651) << endl;
	//cout << Func3(756580036) << endl;
	cout << Func4(5) << endl;
	cout << Func4(97615282) << endl;
	cout << Func4(1024) << endl;
}

//0x00 문제1
int Func1(int n)
{
	int number = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			number += i;
		}
	}
	return number;
}
//0x00 문제2
int Func2(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] + arr[j] == 100)
			{
				return 1;
			}
		}
		
	}
	return 0;
}
//0x00 문제3
int Func3(int n)
{
	for (int i = 1; i * i <= n; i++)
	{
		if (i * i == n) return 1;
	}
	return 0;
}
//0x00 문제4
int Func4(int n)
{
	int value = 1;
	while (2 * value <= n)
	{
		value *= 2;
	}
	return value;
}
