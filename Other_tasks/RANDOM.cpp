#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int rnum;
	int x, i;
	cout << "Я хочу сыграть с тобой в игру. Нужно отгадать случайное положительное число за 6 попыток. Введи свое число" << endl;
	srand(time(NULL));
	rnum = 1 + rand() % 99;
	//cout << rnum; наглядная проверка работоспобности)))
	for (i = 0; i < 7; i++)
	{
		cin >> x;
		if (x > rnum)
		{
			cout << "Ваше число больше загаданного. Попыток все меньше..." << endl;
		}
		else if (x < rnum)
		{
			cout << "Ваше число меньше загаданного. Попытки кончаются" << endl;
		}
		else if (x = rnum)
		{
			cout << "Победа ваша!" << endl;
		}
	}
	return 0;
}