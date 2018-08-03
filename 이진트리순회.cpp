#include <iostream>

using namespace std;

int num=15;

typedef struct node *treePointer;
typedef struct node{
	int data;
	treePointer left, right;
}node;


void preorder(treePointer ptr){ //전위순회 
	if(ptr)
	{
		cout << ptr->data << ' ';
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(treePointer ptr){  //중위순회 
	if(ptr)
	{
		inorder(ptr->left);
		printf("%d ", ptr->data);
		inorder(ptr->right);
	}
}

void postorder(treePointer ptr){  //후위 순회 
 	if(ptr)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout << ptr->data << ' ';
	}
}

int main(void)
{
	node nodes[num +1];
	for(int i=0; i<=num; i++)
	{
		nodes[i].data = i;
		nodes[i].left=NULL;
		nodes[i].right=NULL;
	}
	for(int i=1; i<=num; i++)
	{
		if(i%2==0)
			nodes[i/2].left = &nodes[i];
		else
			nodes[i/2].right = &nodes[i];
	}
	printf("전위순회: ");
	preorder(&nodes[1]);
	printf("\n중위순회: ");
	inorder(&nodes[1]);
	printf("\n후위순회: ");
	postorder(&nodes[1]);
	return 0;
}
