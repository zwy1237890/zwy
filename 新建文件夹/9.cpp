#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list3[i+size1] = list2[i];
	}
	for (int i = 0; i < size1 + size2 - 1; i++)
	{
		for (int j = 0; j < size1 + size2 - 1 - i; j++)
		{
			int temp;
			if (list3[j] > list3[j + 1])
			{
				temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i]<<" ";
	}
}
int main()
{
	int size1, size2, size3;
	cout << "Enter list1: ";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter list2: ";
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int* list3 = new int[size3];
	cout << "The merged list is";
	merge(list1, size1, list2, size2, list3);
}