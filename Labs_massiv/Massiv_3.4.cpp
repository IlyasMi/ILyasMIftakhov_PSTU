#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int a[15]; int max = -1; 
	for (int i = 0; i < 15; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	for (int i = 0; i < 15; i++)
	{
		if (a[i] > max)
		{
			max = a[i];

		}
	}
	cout << "Max: " << max << endl;
	return 0;
}
