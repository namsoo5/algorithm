#include <stdio.h>

int d[100];
//�Ǻ���ġ ����  
int dp(int x){
	if(x==1) return 1;
	if(x==2) return 1;
	if(d[x]!=0) return d[x]; //�̹̱��Ѱ��̶�� ���Ѱ���ȯ
	return d[x] =dp(x-1) + dp(x-2); 
} 

int main(void){
	printf("%d ", dp(40));
	return 0;
}
