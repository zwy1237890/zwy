#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	int n = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			counts[0]++;
		if (s[i] == 'b' || s[i] == 'B')
			counts[1]++;
		if (s[i] == 'c' || s[i] == 'C')
			counts[2]++;
		if (s[i] == 'd' || s[i] == 'D')
			counts[3]++;
		if (s[i] == 'e' || s[i] == 'E')
			counts[4]++;
		if (s[i] == 'f' || s[i] == 'F')
			counts[5]++;
		if (s[i] == 'g' || s[i] == 'G')
			counts[6]++;
		if (s[i] == 'h' || s[i] == 'H')
			counts[7]++;
		if (s[i] == 'i' || s[i] == 'I')
			counts[8]++;
		if (s[i] == 'j' || s[i] == 'J')
			counts[9]++;
		if (s[i] == 'k' || s[i] == 'K')
			counts[10]++;
		if (s[i] == 'l' || s[i] == 'L')
			counts[11]++;
		if (s[i] == 'm' || s[i] == 'M')
			counts[12]++;
		if (s[i] == 'n' || s[i] == 'N')
			counts[13]++;
		if (s[i] == 'o' || s[i] == 'O')
			counts[14]++;
		if (s[i] == 'p' || s[i] == 'P')
			counts[15]++;
		if (s[i] == 'q' || s[i] == 'Q')
			counts[16]++;
		if (s[i] == 'r' || s[i] == 'R')
			counts[17]++;
		if (s[i] == 's' || s[i] == 'S')
			counts[18]++;
		if (s[i] == 't' || s[i] == 'T')
			counts[19]++;
		if (s[i] == 'u' || s[i] == 'U')
			counts[20]++;
		if (s[i] == 'v' || s[i] == 'V')
			counts[21]++;
		if (s[i] == 'w' || s[i] == 'W')
			counts[22]++;
		if (s[i] == 'x' || s[i] == 'X')
			counts[23]++;
		if (s[i] == 'y' || s[i] == 'Y')
			counts[24]++;
		if (s[i] == 'z' || s[i] == 'Z')
			counts[25]++;
	}
}
int main()
{
	char s[999] = "";
	char s1[27]="abcdefghijklmnopqrstuvwxyz";
	int counts[26] = {0};
	cout << "Enter a string: ";
	cin.getline(s, 999);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << s1[i] << ":";
			cout << counts[i] << " times" << endl;
			continue;
		}
		else continue;
	}
}