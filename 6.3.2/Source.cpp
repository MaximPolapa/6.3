#include <iostream>
#include  <time.h>
#include <iomanip>

using namespace std;
void Create(int* a, int n, int i, const int Low, const int High)
{
	if (i < n)
	{
		a[i] = Low + rand() % (High - Low + 1);
		Create(a, n, i + 1, Low, High);

	}
}

void vuvid(int* a, int n, int i)
{
	if (i < n)
	{
		cout << a[i];
		if (i != n - 1)
			cout << ", ";
		else cout << " " << endl;
		vuvid(a, n, i + 1);
	}
}

void Sort(int* a, int n, int i)
{

	if (i < n)
	{ 
		if (i == n - 1)
			return;
		int tmp = a[i + 1];
		a[i + 1] = a[i];
		a[i] = tmp;
		Sort(a, n, i+2);

	}

}


int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

	const int n = 5;
	int a[n];
	int Low = 0;
	int High = 20;
	Create(a, n,0, Low, High);
	vuvid(a,n ,0);
	cout << " " << endl;
	Sort(a, n,0);
	vuvid(a, n,0);

	return 0;


}