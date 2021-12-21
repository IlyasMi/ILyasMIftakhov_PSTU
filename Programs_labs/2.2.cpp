#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n, pr = 1;
	cout << "Введите натуральное число" << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "Число введено неверно!";

	}
	else {
		for (i = 1; i <= n; i++)
		{
			pr *= i;
		}
	}
	cout << " Сумма первых " << n << " положительных чисел равна " << pr << endl;
	return 0;
}
