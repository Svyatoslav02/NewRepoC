#include <iostream>
#include "Csharping.h"
using namespace std;



void InitializationArray(const int& size, int  arr[10][10])
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}cout << endl;
	}
}

int main()
{
	const int size = 10;
	int arr[size][size];
	InitializationArray(size, arr);

}

