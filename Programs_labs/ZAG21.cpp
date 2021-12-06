#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, s, k;
	s = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			k = -i;
			s =s+ k;
		}
		else
		{
			k = i;
			s =s+ k;
		}
	}
	cout << s;

	return 0;
}