#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");//локализация вывода данных на русский язык
	float a, b, c;// инициализируем переменные
	cout << "Введите первое число - " << endl//вывод
	cin >> a;//ввод переменной
	cout << "Введите второе число - " << endl;//вывод
	cin >> b;//ввод переменной
	c = a * b;//мат операция
	cout << "Их произведение равно - " << c << endl;//вывод
	return 0;
}