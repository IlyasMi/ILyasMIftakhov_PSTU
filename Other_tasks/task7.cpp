#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");//локализуем вывод данных на русский язык
	int arr[5];//массив с размером 5
	for (int i = 0; i < 5; i++)//цикл счетчик
	{
		cin >> arr[i];	//заполнение массива
	}
	for (int i = 4; i >= 0; i--)// цикл счетчик
	{
		cout << arr[i] << " " << endl;//вывод массива в обратном порядке
	}
	return 0;
}