#include <iostream>
#include <vector>
#include <queue>
#define MAX 10

using namespace std;

int n, inDegree[MAX];  //indegree 진입차수
vector<int> a[MAX];

void Sort(){
	int result[MAX];
	queue<int> q;
	
	for(int i=1; i<=n; i++)
		if(inDegree[i] == 0) q.push(i); //진입차수가 0인노드를 큐에삽입
		
	for(int i=1; i<=n; i++)  //정렬이 완전히수행되려면 정확히 n개의노드를방문해야함 
	{     //n개를 방문하기전에 큐가비어버리면사이클발생한것 
		if(q.empty())
		{
			printf("사이클발생");
			return;
		}
		
		int x = q.front();
		q.pop();
		result[i] = x;
		for(int j=0; j<a[x].size(); j++)
		{
			int y = a[x][j];   //현재방문노드와 연결된노드 
			
			if(--inDegree[y] == 0)  //연결된노드 연결끊기 
				q.push(y);
		}
	 } 
	 
	 for(int i=1; i<=n; i++)
	 	printf("%d ", result[i]);
} 
 
 int main(void)
 {
 	n=7;
 	a[1].push_back(2);
 	inDegree[2]++;
 	a[1].push_back(5);
 	inDegree[5]++;
 	a[2].push_back(3);
 	inDegree[3]++;
 	a[3].push_back(4);
 	inDegree[4]++;
 	a[4].push_back(6);
 	inDegree[6]++;
 	a[5].push_back(6);
 	inDegree[6]++;
 	a[6].push_back(7);
 	inDegree[7]++;
 	Sort();
 }
