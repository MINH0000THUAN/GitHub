#include"Header.h"
struct Node
{
	int data;
	struct Node *pNext;
}; typedef struct Node NODE;
struct List
{
	NODE *pHead, *pTail;
}; typedef struct List LIST;
void InIt(LIST &l)
{
	l.pHead = l.pTail = NULL;
}
NODE *CreateNode(LIST &l, int x)
{
	NODE *pNode = new NODE;
	if (pNode == NULL)
	{
		cout << "\n Khong du bo nho de cap phat";
		return NULL;
	}
	pNode->data = x;
	pNode->pNext = NULL;
	return pNode;
}
void AddHead(NODE *pNode, LIST &l)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = pNode;
	}
	else
	{
		pNode->pNext = l.pHead;
		l.pHead = pNode;
	}
}
void Input(LIST &l)
{
	InIt(l);
	int n, x;
	cout << "\n Ban muon nhap bao nhieu phan tu: ";
	cin >> n;
	cout << "\n Bat dau nhap data: ";
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		NODE* pNode = CreateNode(l, x);
		AddHead(pNode, l);
	}
}
void Show(LIST l)
{
	cout << endl;
	for (NODE *pNode = l.pHead; pNode != NULL; pNode = pNode->pNext)
	{
		cout << pNode->data << " ";
	}
}
void main()
{
	LIST l;
	Input(l);
	Show(l);
	system("pause");
}