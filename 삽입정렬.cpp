// ��������.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int array[100];
	int i, j, temp;
	int n;

	printf("������ ���ڼ� �Է�(100����): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("�� �����Է�%d: ", i + 1);
		scanf("%d", &array[i]);
	}
	for (i = 0; i < n ; i++)
	{
		j = i;
		while (j >= 0 && array[j-1] > array[j])
		{
			temp = array[j-1];
			array[j-1] = array[j];
			array[j] = temp;
			j--;
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", array[j]);
		}
		printf("\n");
	}

	return 0;
}