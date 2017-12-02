#include"Header.h"
void QuickSort(int *&a, int first, int last)
{
	int i, j, temp, mid;
	mid = a[(first + last) / 2];
	i = first;
	j = last;
	do
	{
		while (a[i] < mid)
		{
			i++;
		}
		while (a[j] > mid)
		{
			j--;
		}
		if (i <= j)
		{
			Swap(a[i++], a[j--]);
		}
	} while (i <= j);
	if (first < j)
	{
		QuickSort(a, first, j);
	}
	if (i < last)
	{
		QuickSort(a, i, last);
	}
}
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Show(int *a, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
