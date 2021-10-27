#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");//локализируем вывод данных на русский язык
	int const c = 10;//инициализируем константу
	cout << c << endl;//выводим на экран
	int i = 20;//инициализируем переменную
	cout << i << endl;//выводим ее
	i = i--;//операция дикремента
	cout << i << endl;//вывод результата

	return 0;
}