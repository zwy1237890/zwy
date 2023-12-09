#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int n = strlen(s1);
	int l = strlen(s2);
	for (int i = 0; i < l; i++)
	{
		int m = 0;
		if (s2[i] == s1[0])
		{
			for (int j = i+1; j < n+i; j++)
			{
				if (s2[j] == s1[j - i])
				{
					m++;
					continue;
				}
				else break;
			}
		}
		if (m == n - 1)
		{
			cout << i;
			break;
		}
		else
		{
			if (i == l - 1)
			{
				cout << -1;
				break;
			}
		}
	}
	return 0;
}
int main()
{
	char s1[999] = "", s2[999] = "";
	cin.getline(s1, 999);
	cin.getline(s2, 999);
	indexof(s1, s2);
}