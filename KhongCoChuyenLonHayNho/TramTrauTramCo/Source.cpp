#include<iostream>
using namespace std;
void main()
{
	for (float i = 0; i < 20; i++)
	{
		for (float j = 0; j < 34; j++)
		{
			for (float k = 0; k < 100; k++)
			{
				if (i + j + k == 100 && 5 * i + 3 * j + k / 3 == 100)
				{
					cout << "\n Dap An: " << i << " Trau dung, " << j << " Trau nam, " << k << " Trau gia \n";
				}
			}
		}
	}
	system("pause");
}