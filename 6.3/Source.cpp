#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void vuvid(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
}

void Sort(int a[], const int size)
{
	for (int  i = 0; i < size; i += 2)
	{
		if (i == size - 1)
		{
			break; 
		}
		int tmp = a[i + 1];
		a[i + 1] = a[i];
		a[i] = tmp;
	}
}


int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 5;
	int a[n]= { 1,5,3,6,9 };
	int Low = 0;
	int High = 20;
	Create(a, n, Low, High);
	vuvid(a, n);
	cout << " " << endl;
	Sort(a, n);
	vuvid(a, n);

	return 0;
}

