#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j,st;
	cin >> n;
	st = sqrt(n);
	for (i = 0; i < st; i++)
	{
		for (j = 0; j < st; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	return 0;
}