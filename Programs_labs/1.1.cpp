#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
	if ((a > b) && (a > c))
	{
		cout << a << " max" << endl;
	}
	else if ((b > c) && (b > a))
	{
		cout << b << " max" << endl;
	}
	else if((c > a) && (c > b))
	{
		cout << c << "c max";
	}
	
	return 0;
}
