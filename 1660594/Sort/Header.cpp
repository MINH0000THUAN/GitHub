#include"Header.h"
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void QuickSort(int *&a, int First, int Last)
{
	int i, j, tam, mid;
	mid = a[(First + Last) / 2];
	i = First;
	j = Last;
	do
	{
		while (a[i]<mid)
			i++;
		while (a[j]>mid)
			j--;
		if (i <= j)
		{
			Swap(a[i++], a[j--]);
		}
	} while (i<j);
	if (First<j)
		QuickSort(a, First, j);
	if (i<Last)
		QuickSort(a, i, Last);
}
void Heapify(int *&a, int n, int i)
{
	int left = 2 * (i + 1) - 1;
	int right = 2 * (i + 1);
	int largest;
	if (left<n&&a[left]>a[i])
	{
		largest = left;
	}
	else
	{
		largest = i;
	}
	if (right<n&&a[right]>a[largest])
	{
		largest = right;
	}
	if (i != largest)
	{
		Swap(a[i], a[largest]);
		Heapify(a, n, largest);
	}
}
void BuildHeap(int *&a, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		Heapify(a, n, i);
	}
}
void HeapSort(int *&a, int n)
{
	BuildHeap(a, n);
	for (int i = n - 1; i > 0; i--)
	{
		Swap(a[0], a[i]);
		Heapify(a, i, 0);
	}
}
//==============================================
int Min(int x, int y)
{
	return x < y ? x : y;
}
void Merger(int *&a, int start, int end)
{
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int temp;
	while (i <= j && j <= end)
	{
		if (a[i] > a[j])
		{
			temp = a[j];
			for (int k = j; k > i; k--)
				a[k] = a[k - 1];
			a[i] = temp;
			j++;
		}
		i++;
	}
}

void Merger_Sort(int *&a, int start, int end)
{
	if (end - start < 1)
		return;
	int mid = (start + end) / 2;
	Merger_Sort(a, start, mid);
	Merger_Sort(a, mid + 1, end);
	Merger(a, start, end);
}
void SelectionSort(int *&a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}