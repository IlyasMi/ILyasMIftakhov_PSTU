#include<iostream>
using namespace std;
int main()
{
	int n, a, b,s;
	s = 0;
	cin >> n;
	while (n != 0)
	{
		a = n % 10;
		n = n / 10;
		s = s + a;
	}
	cout << s;
	return 0;
}