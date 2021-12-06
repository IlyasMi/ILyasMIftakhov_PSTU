#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, d, x1, x2;
	cout << "You have a ax^2+bx+c=0" << endl;
	cout << "Enter a, b, c -";
	cin >> a >> b >> c;
	cout << "You have a -" << a << "x^2  " << b << "x + " << c << endl;
	d = (pow(b, 2) - 4 * a * c);
	x1 = ((-b + sqrt(d)) / (2*a));
	x2 = ((-b - sqrt(d)) / (2*a));
	if (d == 0)
	{
		cout << x1;
	}
	else if(d < 0)
	{
		cout << "Error";
	}
	else
	{
		cout << x1 << " " << x2;
	}
	return 0;
}