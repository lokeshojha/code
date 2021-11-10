#include<stdio.h>
void fibo(int n){
	int a =0, b=1, c;
	printf("%d  %d  ",a,b);
	for(int i=3;i<=n;i++){
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
	}
	 
	
}
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	fibo(n);
	//printf("%dth term is  %d", n , ans);
	
	
}
