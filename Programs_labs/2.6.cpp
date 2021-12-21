#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	cin >> n;
	int j;
	if (n > 2)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				cout << " ";
			}
			for (j = i; j < n; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}
