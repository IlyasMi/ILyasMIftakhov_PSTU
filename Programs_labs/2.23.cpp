#include<iostream>
using namespace std;
int main()
{
	int volume = 1;
	float n, a;
	a = 0;
	int i = 2;
	cin >> n;
	float max;
	max = sin(n + (1 / n));
	while (i <= n)
	{

		a = sin(n + (i / n));
		
		if (a > max)
		{
			max = a;
			volume = 1;
		}
		else if (a == max)
		{
			
			volume++;
		}
		i++;
	}
	cout << max << endl;
	cout << volume;



	return 0;
}