#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	float a;
	cout << "Введите число - " << endl;
	cin >> a;
	if (a < 5)
	{
		a = a * 3;
		cout << a;
	}
	else if ((a > 5) && (a < 7))
	{
		a = a / 10;
		cout << a;
	}
	else if (a > 7)
	{
		a = a + 3;
		cout << a;
	}
	return 0;
}
