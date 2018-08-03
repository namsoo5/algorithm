// ������.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

const int num = 9;
int heap[9] = { 6,3,8,6,9,7,1,5,4 };


int main(void)
{
	for (int i = 1; i < num; i++)  //������
	{
		int c = i;
		do
		{
			int root = (c - 1) / 2; //�θ���
			if (heap[root] < heap[c])  //�θ��尡 ���۴ٸ�
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;

		} while (c != 0);
	}

	for (int i = num-1; i >= 0; i--) {  // �ֻ�����带 �� ������ ������
									//�ٽ� �����Ĺݺ� -> ������� ���ĉ�
		int temp = heap[0];
		heap[0] = heap[i];   //�ֻ�����带 �������κ���
		heap[i] = temp;      //������带 �ֻ�������

		int root = 0;
		int c = 1; 
		do { //�ٽ�������
			c = 2 * root + 1; //�ڽĳ��

			if (c < i - 1 && heap[c] < heap[c + 1])  //�ڽ��߿� ū���
				c++;

			if (heap[root] < heap[c] && c < i) //��Ʈ���� �ڽ���ũ�� ��ȯ
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

