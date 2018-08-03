// 퀵정렬.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int number = 10;
int data[] = { 3, 7, 4, 8, 10, 9, 2, 1, 6, 5 };

void quickSort(int * data, int start, int end) {
	if (start >= end)
		return;

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)   //엇갈릴때까지반복
	{
		while (i <= end && data[i] <= data[key]) {
			i++;   //키값보다 큰값만날때까지
		}
		while (j > start && data[j] >= data[key]) {
			j--;   //키값보다 작은값만날때까지
		}
		if (i > j) { //엇갈린상태
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}
int main()
{
	quickSort(data, 0, number - 1);
	for(int i=0; i<10; i++)
			printf("%d ", data[i]);
    return 0;
}

