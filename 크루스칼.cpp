#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

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
class Edge{
	public:
		int node[2];
		int distance;
		Edge(int a, int b, int distance)
		{
			this->node[0]=a;
			this->node[1]=b;
			this->distance=distance;
		}
		bool operator <(Edge &edge){
			return this->distance < edge.distance; //거리짧은거부터나열  
		}
};

int main(void)
{
	int n = 7; //노드개수
	int m = 11; //거리값 개수
	
	 vector<Edge> v;
	 v.push_back(Edge(1,7,12));
	 v.push_back(Edge(1,4,28));
	 v.push_back(Edge(1,2,67));
	 v.push_back(Edge(2,4,24));
	 v.push_back(Edge(2,5,62));
	 v.push_back(Edge(3,5,20));
	 v.push_back(Edge(3,6,37));
	 v.push_back(Edge(4,7,13));
	 v.push_back(Edge(5,6,45));
	 v.push_back(Edge(5,7,73));
	 v.push_back(Edge(1,5,17));
	 
	 sort(v.begin(), v.end());
	 
	 int parent[n];
	 for(int i=0; i<n; i++)
	 	parent[i] = i;
	 	
	int sum=0; //거리합
	for(int i=0; i<v.size(); i++)
	{
		if(!findParent(parent, v[i].node[0]-1, v[i].node[1]-1))
		{
			sum+= v[i].distance;
			unionParent(parent, v[i].node[0]-1, v[i].node[1]-1);
		}
	 } 
	 
	 printf("%d ", sum);
	 	
}
