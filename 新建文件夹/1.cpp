#include<iostream>
using namespace std;
int min(int m, int n)//最大公因数
{
	int c = 0;
	for (int i = m < n ? m : n; i > 0; i--)
	{
		if (m % n == 0 || n % m == 0)
		{
			c = m < n ? m : n;
			break;
		}
		else if (m % i == 0 && n % i == 0)
		{
			c = i;
			break;
		}
	
	}
	return c;
}
int max(int m, int n)//最小公倍数
{
	int c = 0;
	for (int i = m > n ? m : n; i <= (m * n); i++)
	{
		if (m % n == 0 || n % m == 0)
		{
			c = m > n ? m : n;
			break;
		}
		else if (i % m == 0 && i % n == 0)c = i;
	}
	return c;
}
int main() 
{
	int m, n,d;
	cin >> m >> n;
	cout<<min(m, n);
}