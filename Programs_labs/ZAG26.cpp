#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	float s;
	int n,c;
	s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		c = i;
		int j = 1;
		while (j < i)
		{
			j = j * 3;
			if (j == i)
			{
				c = -i;
			}
		}
		
		s = s + c;

	}
	cout << s;
}