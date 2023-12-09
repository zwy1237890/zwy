#include<iostream>
using namespace std;
int main()
{
	bool a[100] ;
	for (int n = 0; n < 100; n++)
	{
		a[n] = 0;
	}
	for (int i = 0; i < 100;i++)
	{
		for (int k = i; k <100; k+=i+1)
		{
        if (a[k])
		{
			a[k] = 0;
		}
		else if (a[k] == 0)
		{
			a[k] = 1;
		}
		}
	}
	for (int j = 0; j < 100; j++)
	{
		if (a[j])cout << j+1 << " ";
		else continue;
	}
}