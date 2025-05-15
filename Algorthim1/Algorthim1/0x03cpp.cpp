#include<iostream>

using namespace std;

int arr[] = { 1,52,48 };

int Fun1(int arr[], int n);
int main(void)
{

	/*string s;
	cin >> s;

	for (char a = 'a'; a <= 'z'; a++)
	{
		int cnt = 0;
		for (char c : s)
		{
			if (a == c)
			{
				cnt++;
			}
		}
		cout << cnt << ' ';
	}*/
	
	Fun1(arr, 3);
}

int Fun1(int arr[], int n) //두수 의 합이 100이 되는지 체크
{
	int occur[101] = {};
	for (int i = 0; i < n; i++)
	{
		if (occur[100 - arr[i]])
		{
			return 1;
			occur[arr[i]] = 1;
		}
	}
	return 0;
}