#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int a[15]; 
	for (int i = 0; i < 15; i++)
	{
		cin >> a[i];

	}
	cout << endl;
	for (int i = 14; i >=0; i--)
	{
		cout << a[i] << endl;
	}

	return 0;
}
