#include <stdio.h>

int num = 4;
int INF = 10000;

int a[4][4] = {
	{0, 5, INF, 8},
	{7, 0, 9, INF},
	{2, INF, 0, 4},
	{INF, INF, 3, 0}
};

void floyd(){
	
	int d[num][num];
	
	for(int i =0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			d[i][j] = a[i][j];
		}
	}
	
	//k는 거쳐가는노드 i는 출발노드 j는 도착노드 
	
	for(int k=0; k<num; k++)
	{
		for(int i =0; i<num; i++)
		{
			for(int j=0; j<num; j++)
			{
				if(d[i][k]+d[k][j] < d[i][j])
					d[i][j] = d[i][k]+d[k][j];
			}
		}
	}
	
	for(int i =0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			printf("%d ", d[i][j]);
		}
		printf("\n"); 
	}
	
}

int main(void)
{
	floyd();
}
