#include <iostream>
#include <vector>

using namespace std;

const int num= 10;
int c[num]; // 숫자1~9사용 
//vector<int> a[num];

void dfs(int start)
{
	if(c[start])
		return;
	
	c[start] = true;
	printf("%d ", start);
	
	for(int i=0; i<2; i++)  //자식은 2개이므로 2번반복하면 
	{
		int y = 2*start;
		if(y>=num)
			return;
		if(!c[y] )
			dfs(y);
		else
		{
			y=2*start+1;
			dfs(y);
		}
	}
	
 } 
 
 int main(void)
 {
 	/*
 	a[1].push_back(2);  //1과 연결된 숫자들 
	a[1].push_back(3);
	
	a[2].push_back(1);  //2와 연결된 숫자들 
	a[2].push_back(3);
	a[2].push_back(4);
	a[2].push_back(5);
	
	a[3].push_back(1);
	a[3].push_back(2);
	a[3].push_back(6);
	a[3].push_back(7);
	
	a[4].push_back(2);
	a[4].push_back(5);
	a[4].push_back(8);
	a[4].push_back(9);
	
	a[5].push_back(2);
	a[5].push_back(4);
	
	a[6].push_back(3);
	a[6].push_back(7);
	
	a[7].push_back(3);
	a[7].push_back(6);
	*/
	dfs(1);
	return 0;
 }
