#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n, a;
	float z;
	a = 0;
	cin >> n;
	cin >> z;
		for(int i=1;i<=n;i++)
		{
		a += 1;
		a = sin(n + (i / n));
		a = (round(a * 10) / 10);
		if (a == z)
		{
			cout << "AGON'";
		}
		}

	return 0;
}