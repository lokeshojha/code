#include<stdio.h>
int fibo(int n){
	int a =0, b=1, c;
	for(int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
	
}
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int ans=fibo(n);
	printf("%dth term is  %d", n , ans);
	
	
}
