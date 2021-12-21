#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j, s, max, min;
	min = 1000000;
	max = -1000000;
	cout << "Enter the length of line - " << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "Enter your number - ";
		cin >> j;
		if (j > max)
		{
			max = j;
		}
		if (j < min)
		{
			min = j;
		}
	}
	s = min + max;
	cout << "MIN+MAX= " << s << endl;

	return 0;
}
