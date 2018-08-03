#include <iostream>
#include <vector>
#define MAX 101

using namespace std;

vector<int> a[MAX];
int d[MAX];  //1,2,3처럼 선택하는집합의미 
bool c[MAX];
int n =3, m, s;   

bool dfs(int x)
{
	for(int i=0; i<a[x].size(); i++)
	{
		int t = a[x][i];
		if(c[t])
			continue; //이미처리한 노드 스킵 
		c[t] = true;
		if(d[t] ==0 || dfs(d[t]))  //선택하지않앗거나 다른선택지가있는경우 
		{
			d[t]=x;
			return true;
		}
	}
	return false; 
}

int main(void)
{
	a[1].push_back(1);
	a[1].push_back(2);
	a[1].push_back(3);
	a[2].push_back(1);
	a[3].push_back(2);
	
	int count=0;
	for(int i=1; i<=n; i++)
	{
		fill(c, c+MAX, false);
		if(dfs(i))
			count++;
	}
	printf("%d개의 매칭이 이루어졌습니다.\n", count);
	for(int i=1; i<=100; i++)
	{
		if(d[i]!=0)
			printf("%d가 -> %c\n", d[i], i+64);
	 } 
	 return 0;
}
