﻿#include<iostream>
using namespace std;
int main()
{
	int n, c;
	cin >> n;
	while (n!=0)
	{
		c = n % 10;
		n = n / 10;
		cout << c;
	}

	return 0;
}