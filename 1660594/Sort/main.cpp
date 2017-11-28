#include"Header.h"
void main()
{
	int *a, n;
	cout << "\n nhap n: ";
	cin >> n;
	a = new int[n];
	cout << "\n nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	QuickSort(a, 0, n-1);
	//HeapSort(a, n);
	//Merger_Sort(a, 0, n-1);
	//SelectionSort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
}
