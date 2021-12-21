#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n = 10;
	int miniDX = 0;
	int stakan = 0;
	int a[10] = { 7,6,9,30,21,3,0,15,18,100 };

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		miniDX = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[miniDX])
			{
				miniDX = j;
			}
		}
		stakan = a[miniDX];
		a[miniDX] = a[i];
		a[i] = stakan;
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

}