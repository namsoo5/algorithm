#include <stdio.h>

int num=100000;
int a[100001];

void prime(){
	for(int i=2; i<=num; i++)
	{
		a[i]=i;
	}
	
	for(int i=2; i<=num; i++)
	{
		if(a[i]==0)
			continue;
		for(int j=i+i; j<=num; j += i)
		{
			a[j]=0;
		}
	}
	
	for(int i=2; i<=num; i++)
	{
		if(a[i]!=0)
			printf("%d ", a[i]);
	}

}
int main(void)
{
	prime();
	return 0;
}
