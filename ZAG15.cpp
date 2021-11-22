#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, t, i;
	bool flag = false;

	cout << "Введите длину последовательности - " << endl;
	cin >> n;
	i = 1;
	while (i <= n && !flag)
	{
		cout << "Введите число: " << endl;
		cin >> t;
		if (t == 0)
		{
			i++;
		}
		else 
		{
			if(t>0)
			{
				flag = true;
			}
		}
	}
	if (flag=true)
	{
		cout << "Сначала вы ввели положительное число" << endl;
	}
	else
	{
		cout << "Сначала вы ввели отрицательное число" << endl;
	}


	return 0;
}