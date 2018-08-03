#include <iostream>
#include <vector>
#define MAX 101

using namespace std;

vector<int> a[MAX];
int d[MAX];  //1,2,3ó�� �����ϴ������ǹ� 
bool c[MAX];
int n =3, m, s;   

bool dfs(int x)
{
	for(int i=0; i<a[x].size(); i++)
	{
		int t = a[x][i];
		if(c[t])
			continue; //�̹�ó���� ��� ��ŵ 
		c[t] = true;
		if(d[t] ==0 || dfs(d[t]))  //���������ʾѰų� �ٸ����������ִ°�� 
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
	printf("%d���� ��Ī�� �̷�������ϴ�.\n", count);
	for(int i=1; i<=100; i++)
	{
		if(d[i]!=0)
			printf("%d�� -> %c\n", d[i], i+64);
	 } 
	 return 0;
}
