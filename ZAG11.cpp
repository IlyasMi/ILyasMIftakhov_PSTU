﻿#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (i = 1; i <= n - 2; i++)
	{
		cout << "* ";
		for (j = 1; j <= n - 2; j++)
		{
			cout << "  ";
		}
		cout << "*" << endl;
	}
	for (i = 1; i <= n; i++)
	{
		cout << "* ";
	}
	return 0;
}