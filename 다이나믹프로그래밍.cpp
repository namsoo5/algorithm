#include <stdio.h>

int d[100];
//피보나치 수열  
int dp(int x){
	if(x==1) return 1;
	if(x==2) return 1;
	if(d[x]!=0) return d[x]; //이미구한값이라면 구한값반환
	return d[x] =dp(x-1) + dp(x-2); 
} 

int main(void){
	printf("%d ", dp(40));
	return 0;
}
