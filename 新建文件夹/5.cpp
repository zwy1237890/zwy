#include<iostream>
using namespace std;
int main()
{
	int i, j=1,a;
	a = 2 * j + 2;
	for (int k = 0; k < 8; k++)
	{
		i = 2 * a+ 2;
		a = i;
	}
	cout << a;
}