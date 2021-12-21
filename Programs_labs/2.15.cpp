#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, z, a;
	cin >> n >> z;
	while (n != 0)
	{
		a = n % 10;
		n = n / 10;
		if (a == z)
		{
			cout << "Congrats!" << endl;
			break;
		}
		}
	return 0;
}
