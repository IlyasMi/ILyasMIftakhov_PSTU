#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int n, tmp;
	n = 11;
	int a[11];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	cout << endl;
	for (int i = 0; i < n/2; i++)//SWAP
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}

	return 0;
}