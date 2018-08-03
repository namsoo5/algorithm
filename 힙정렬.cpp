// 힙정렬.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

const int num = 9;
int heap[9] = { 6,3,8,6,9,7,1,5,4 };


int main(void)
{
	for (int i = 1; i < num; i++)  //힙구성
	{
		int c = i;
		do
		{
			int root = (c - 1) / 2; //부모노드
			if (heap[root] < heap[c])  //부모노드가 더작다면
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;

		} while (c != 0);
	}

	for (int i = num-1; i >= 0; i--) {  // 최상위노드를 젤 끝으로 보내고
									//다시 힙정렬반복 -> 순서대로 정렬됌
		int temp = heap[0];
		heap[0] = heap[i];   //최상위노드를 젤끝으로보냄
		heap[i] = temp;      //젤끝노드를 최상위노드로

		int root = 0;
		int c = 1; 
		do { //다시힙구성
			c = 2 * root + 1; //자식노드

			if (c < i - 1 && heap[c] < heap[c + 1])  //자식중에 큰노드
				c++;

			if (heap[root] < heap[c] && c < i) //루트보다 자식이크면 교환
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);

	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ", heap[i]);
	}
	return 0;
}

