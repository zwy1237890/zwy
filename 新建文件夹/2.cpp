#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num < 2)return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a[20][10],n=0;
	for (int k = 0; k < 1224; k++)
	{
		if (is_prime(k) == 1)
		{
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					n++;
					a[i][j] = k;
					cout << a[i][j]<<" ";
					if (n%10==0)cout << endl;
					break;
				}
				break;
			}
		}
	}
}