#include <algorithm>
#include <stdio.h>
#include <iostream>
int main(void)
{
	int a[10] = {9 ,2, 3, 6, 4, 7, 1, 5, 8, 10};
	sort(a, a+10);
	for(int i=0; i<10; i++)
	{
		printf("%d", a[i]);
	}
	
}
