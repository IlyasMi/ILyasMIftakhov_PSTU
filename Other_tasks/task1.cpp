#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");//локализируем вывод данных на русский язык
	int i = 1;//инициализируем переменную
	i = ++i*i++;//мат преоразование
	cout << i << endl;//вывод данных на экран

	return 0;
}