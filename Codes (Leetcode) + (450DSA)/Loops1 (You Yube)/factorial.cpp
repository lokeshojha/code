#include<stdio.h>
int factorial(int n){
	int ans=1;
	if(n==0){
		return 1;
	}
	for(int i=n;i>0;i--){
		ans=ans*i;
	}
	return ans;
}
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int ans=factorial(n);
	printf("the factorial is %d", ans);
	
	
}
