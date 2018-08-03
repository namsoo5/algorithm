#include <stdio.h>

int getParent(int parent[], int x)
{
	if(parent[x]==x)
		return x;
	return parent[x] = getParent(parent, parent[x]);
}

void unionParent(int parent[], int x, int y)
{
	x=getParent(parent, x);
	y=getParent(parent, y);
	if(x<y)
		parent[y]=x;
	else 
		parent[x] = y;
}

int findParent(int parent[], int x, int y)
{
	x=getParent(parent, x);
	y=getParent(parent, y);
	if(x==y)
		return 1;
	else
		return 0;
}



int main(void)
{
	int parent[11];
	for(int i=1; i<11; i++)
	{
		parent[i]=i;
	}	
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	unionParent(parent, 8, 9);
	printf("1과5는 연결되잇나? %d\n", findParent(parent, 1, 5));
	unionParent(parent, 1, 5);
	printf("1과5는 연결되잇나? %d\n", findParent(parent, 1, 5));
	printf("5과8는 연결되잇나? %d\n", findParent(parent, 5, 8));
	
}
