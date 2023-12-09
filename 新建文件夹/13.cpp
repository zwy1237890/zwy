#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int n = strlen(hexString);
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
			sum += (hexString[i] - 48) * pow(16, n - i - 1);
		else if (hexString[i] >= 'A' && hexString[i] <= 'Z')
			sum += (hexString[i] - 55) * pow(16, n - i - 1);
	}
	cout << sum;
	return 0;
}
int main()
{
	char hexstring[9999] = "";
	cin.getline(hexstring, 9999);
	parseHex(hexstring);
}