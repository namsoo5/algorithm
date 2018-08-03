// 알고리즘.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int i, j, temp, index, min;
	int array[10] = { 8, 4, 6, 2, 1, 7, 5, 3, 10, 9 };
	for (i = 0; i < 10; i++)
	{
		min = 999;
		for (j = i; j < 10; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",array[i]);
	}
	

    return 0;
}

