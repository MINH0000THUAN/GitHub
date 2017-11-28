#pragma once
#include<iostream>
using namespace std;
void Swap(int &a, int &b);
void QuickSort(int *&a, int first, int last);
void Heapify(int *&a, int n, int i);
void BuildHeap(int *&a, int n);
void HeapSort(int *&a, int n);
int Min(int x, int y);
void Merger(int *&a, int start, int end);
void Merger_Sort(int *&a, int start, int end);
void SelectionSort(int *&a, int n);