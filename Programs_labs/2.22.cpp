#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n, a;
	a = 0;
	int i = 2;
	int posFirst = 1;
	int posLast = 1;
	cin >> n;
	float max;
	 max = (round(sin(n + (1 / n) * 10) / 10));
	while(i<=n)
	{
	
		a = sin(n + (i / n));
		a = (round(a * 10) / 10);
		if (a>max)
		{
			max = a;
			posFirst = i;
			posLast = i;
		}
		else if (a ==max)
		{
			posLast = i;
		}
		i++;
	}
	cout << max << endl;
	cout << "The first is - " << posFirst << endl;
	cout << "The last is - " << posLast << endl;

	return 0;
}
