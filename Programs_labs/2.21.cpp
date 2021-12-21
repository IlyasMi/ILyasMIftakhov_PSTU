#include <iostream>
using namespace std;
int main()
{
	int i, x;
	bool flag = false;
	cin >> x;
	i = x;
	while (x != 0)
	{
		cin >> x;
		if (i > x&&x != 0)
		{
			flag = false;
			break;
		}
		else if (i < x&&x != 0)
		{
			flag = true;
			i = x;
		}
	}
		if (flag == true)
		{
			cout << "Correct";
		}
		else 
		{
			cout << "error";
		}
	
	return 0;
}
