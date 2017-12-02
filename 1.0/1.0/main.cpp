#include"Header.h"
void main()
{
	srand((unsigned)time(NULL));
	int n, *a;
	n = rand() % 100 + 10;
	//n = 6;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		//cin >> a[i];
	}
	cout << "\n Mang vua khoi tao la: ";
	Show(a, n);
	cout << "\n Mang sau khi sort :";
	QuickSort(a, 0, n-1);
	Show(a, n);
	system("pause");
}