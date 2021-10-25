#include<iostream>
#include<algorithm>
using namespace std;
bool a[3];
int b[3];
void per(int t)

{
	int i;
	if (t == 3)
	{
		for (i = 0; i < 3; i++)
			cout << b[i];
		cout << " ";
	}

	for (i = 0; i < 3; i++)
		if (!a[i])
		{
			b[t] = i + 1;
			a[i] = true;
			per(t + 1);
			a[i] = false;
		}
	
}
int main()
{
	int *mas = b;
	int temp;
	

	temp = mas[0];
	for (int i = 0; i < 6; i++)
		if (mas[i] > temp)
			temp = mas[i];

	cout << temp << " ";
	
	per(0);
	return 0;

}