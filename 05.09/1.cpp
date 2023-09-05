#include <iostream>
using namespace std;

void func1()
{
	cout << "Func 1\n" << endl;
}

void func2()
{
	cout << "Func 2\n" << endl;
}

void func3()
{
	cout << "Func 3\n" << endl;
}

void initArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}
}

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main() 
{
	const int sizeArr = 5;
	int arr[sizeArr];
	initArr(arr, sizeArr);
	printArr(arr, sizeArr);
}