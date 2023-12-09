#include<iostream>
using namespace std;
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int k = 0; k < 10 - 1; k++)
	{
		for (int j = 0; j < 10 - k - 1; j++)
		{
			double temp = 0;
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout<< a[i]<<" ";
	}
}