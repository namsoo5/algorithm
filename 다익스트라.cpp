#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int num = 6;
int INF = 100000;

vector<pair<int, int> > a[7];  //간선정보
int d[7]; //최소 거리

void dijkstra(int start){
	d[start] = 0;
	priority_queue<pair<int, int> > pq; //힙구조
	pq.push(make_pair(start, 0));
	
	while(!pq.empty()){
		int current = pq.top().first;
		int distance = -pq.top().second;  //짧은것이먼저오도록 음수화
		printf("current: %d\n", current); 
		printf("distance: %d\n", distance); 
		pq.pop();
		if(d[current] < distance)
		{
			printf("실행됌\n");
			continue;
		}
		for(int i=0; i<a[current].size(); i++)
		{
			int next = a[current][i].first; //선택된 노드의 인접노드
			int nextDistance = distance + a[current][i].second; //선택된노드를 인접노드로 거쳐서 가는비용
			printf("next: %d\n", next); 
				printf("nextDistance: %d\n", nextDistance);
			if(nextDistance < d[next])
			{
				printf("큐추가\n");
				d[next] = nextDistance;
				pq.push(make_pair(next, -nextDistance));
			 } 
		 } 
	} 
} 

int main(void)
{
	for(int i=1; i<=num; i++)
		d[i] = INF;  //연결되지않은경우 비용은 무한 
		
	a[1].push_back(make_pair(2, 2));  //1번에서 2번노드로가는비용2 
	a[1].push_back(make_pair(3, 5));  //1번에서 3번노드로가는비용5 
	a[1].push_back(make_pair(4, 1));
	
	a[2].push_back(make_pair(1, 2));
	a[2].push_back(make_pair(3, 3));
	a[2].push_back(make_pair(4, 2));
	
	a[3].push_back(make_pair(1, 5));
	a[3].push_back(make_pair(2, 3));
	a[3].push_back(make_pair(4, 3));
	a[3].push_back(make_pair(5, 1));
	a[3].push_back(make_pair(6, 5));
	
	a[4].push_back(make_pair(1, 1));
	a[4].push_back(make_pair(2, 2));
	a[4].push_back(make_pair(3, 3));
	a[4].push_back(make_pair(5, 1));
	
	a[5].push_back(make_pair(3, 1));
	a[5].push_back(make_pair(4, 1));
	a[5].push_back(make_pair(6, 2));
	
	a[6].push_back(make_pair(3, 5));
	a[6].push_back(make_pair(5, 2));
	
	dijkstra(1);
	
	for(int i =1; i<=num ; i++)
		printf("%d ", d[i]); 
}
