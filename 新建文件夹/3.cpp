#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel, fah;
	cout << "Celsius:";
	cin >> cel;
	printf("%.1f", celsius_to_fah(cel));
	cout << endl;
	cout << "Fahrenheit:";
	cin >> fah;
	printf(" % .2f", fahrenheit_to_cels(fah));
}