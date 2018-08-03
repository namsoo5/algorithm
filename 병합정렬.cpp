// 병합정렬.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

const int number = 8;
int sort[8];

void merge(int a[], int start, int mid, int end)
{
	int i = start;
	int j = mid+1;
	int k = start;

	while (i <= mid && j <= end)
	{
		if (a[i] <= a[j])
		{
			sort[k] = a[i];
			i++;
		}
		else
		{
			sort[k] = a[j];
			j++;
		}
		k++;
		
	}
	
	if (i > mid)    //남은데이터삽입
	{
		for (int b = j; b <= end; b++)
		{
			sort[k] = a[b];
			k++;
		}
	}
	else
	{
		for (int b = i; b <= mid; b++)
		{
			sort[k] = a[b];
			k++;
		}
	}
	for (int b = start; b <= end; b++)
	{
		a[b] = sort[b];    //정렬된 배열삽입
	
	}
}

void mergeSort(int a[], int start, int end)
{
	if (start < end)  //크기가1인경우 제외
	{
		int mid = (start + end) / 2;
		mergeSort(a, start, mid);
		mergeSort(a, mid+1, end);
		merge(a, start, mid, end);
	}
}

int main(void)
{
	int array[number] = { 5, 3, 9, 2, 8, 7, 6, 4 };
	mergeSort(array, 0, number - 1);
	for (int i = 0; i < number; i++)
		printf("%d ", array[i]);
    return 0;
}

