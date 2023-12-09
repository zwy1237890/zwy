#include<iostream>
using namespace std;
void bolw(int a[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int len;
	cin >> len;
	int* a = new int[len];
	for (int i = 0; i < len; i++)
	{
		cin >> a[i];
	}
	bolw(a,len);
	for (int i = 0; i < len; i++)
	{
		cout <<*(a+i)<<" ";
	}
	delete a;
}