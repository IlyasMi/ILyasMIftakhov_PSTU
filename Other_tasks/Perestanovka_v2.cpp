#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите трехзначное положительное число от 100 до 999!" << endl;
	int x, a, b, c, m;
	cin >> x;
	if ((x < 999) && (x > 100))
	{
		a = (x / 100);
		b = (x / 10) % 10;
		c = x % 10;
		int arr[6];
		arr[0] = (c * 100) + (b * 10) + a;
		arr[1] = (a * 100) + (c * 10) + b;
		arr[2] = (a * 100) + (b * 10) + c;
		arr[3] = (c * 100) + (a * 10) + b;
		arr[4] = (b * 100) + (a * 10) + c;
		arr[5] = (b * 100) + (c * 10) + a;
		for (int i = 0; i < 6; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
		m = arr[0];
		for (int i = 0; i < 6; i++)
		{
			if (arr[i] > m)
			{
				m = arr[i];
			}
		}
	}
	else
	{
		cout << "Число введено неверно. Повторите ввод";
	}
	cout << "Максимальное число - " << m;
	return 0;
}