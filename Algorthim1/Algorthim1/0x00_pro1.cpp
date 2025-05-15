#include<iostream>

using namespace std;

void Func1(int N);
int main()
{
	int num;

	cin >> num;

	Func1(num);
}

void Func1(int N)
{
	int max = 0;
	if (N > 100000) return ;
	for (int i = 0; i <= N; i++)
	{
		if (i % 3 == 0 )
		{
			max += i;
		}
		else if (i % 5 == 0)
		{
			max += i;
		}
	}
	cout << max;
}