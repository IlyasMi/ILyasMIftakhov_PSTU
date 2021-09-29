#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a[10] = { 0 };
	char c[10];
	int i = 0;
	cout << "Enter your string- " << endl;
	cin >> c;
	while (c[i] != '.' && c[i] != '\0')
	{
		if ((c[i] >= '0') && (c[i] <= '9'))
			++a[c[i] - '0'];
		i++;
	}

	for (int i = 0; i < 10; i++)
	
		cout << "Chislo " << i << " vstrechaetsya " << a[i] << " raz" << endl;
	
	return 0;
}