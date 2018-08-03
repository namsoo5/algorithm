// 계수 정렬(counting sort).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int temp;
	int count[6];
	int array[] = { 1, 3, 4, 2, 1, 4, 1,3, 2,1,
		2,3,1,3,4,5,2,1,2,3,1,5,3,4,5,1,4,5,5,
		3,2,1,3,4,5,1,5,5,3,2,1,5,3 };

	for (int i = 0; i < 6; i++)
		count[i] = 0;

	for (int i = 0; i < sizeof(array)/4 ; i++)
		count[array[i]]++;

	for (int i = 1; i < 6; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
				printf("%d ", i);
		}
	}
    return 0;
}

