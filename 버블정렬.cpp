// 버블정렬.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	int array[10] = { 1, 3, 9 ,7, 5, 8 ,10, 4, 6, 2 };
	int i, j, temp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}