#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	bool flag=true;
	int a[5]{ 5,6,7,8,9 };
	for (int i = 4; i>0; i--)
	{
		if (a[i] <a[i-1])
		{
			flag = false;
		}
		else
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << "OKEY";
	}
	else
	{
		cout << "ERROR";
	}
	return 0;
}
