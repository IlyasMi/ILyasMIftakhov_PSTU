#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n, sum = 0;
	cout << "Введите натуральное число" << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "Число введено неверно!";
		
	}
	else {
		for (i = 0; i <= n; i++)
		{
			sum += i;
		}
	}
		cout << " Сумма первых " << n << " положительных чисел равна " << sum << endl;
	return 0;
}


