#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, s, k, z;
	s = 0;
	cin >> n;
	cin >> z;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0 && i%z == 0)
		{
			k = -i;
			s = s + k;
		}
		if (i % 2 == 0 && i%z == 0)
		{
			k = i;
			s = s + k;
		}
	}
	cout << s;

	return 0;
}
