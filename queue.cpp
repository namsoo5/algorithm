#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	queue<int> q;
	q.push(7);
	q.push(3);
	q.push(8);
	q.push(9);
	q.pop();
	q.push(3);
	q.push(5);
	q.push(4);
	
	while(!q.empty())
	{
		printf("%d ", q.front());
		q.pop();
	}
}
