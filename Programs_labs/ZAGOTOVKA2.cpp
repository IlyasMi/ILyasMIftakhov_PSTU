#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите два числа" << endl;
	cin >> a >> b;
	if (b != 0)
	{
		c = a / b;
		cout << "Разность равна -" << c;
	}
	else(b = 0);
		cout << "Деление на нуль невозможно!";
	return 0;
}

