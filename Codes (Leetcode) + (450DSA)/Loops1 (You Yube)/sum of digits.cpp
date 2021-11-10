#include<stdio.h>
int sumOfDigits(int n){
	int result=0;
	while(n!=0){
		int rem=n%10;
		result=rem+result;
		n=n/10;
	}
	return result;
	
}
int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int ans=sumOfDigits(n);
	printf("sum of digits is %d",ans);
	
	
	
}
