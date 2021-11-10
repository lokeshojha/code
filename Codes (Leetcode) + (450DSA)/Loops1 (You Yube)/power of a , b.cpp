#include<stdio.h>
int power(int a, int b){ 
	int ans=1;
	int c=0;
	
	for(int i=0;i<b;i++){
		ans=a*ans;
	}
	return ans;
}
int main(){
	int a, b;
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	
	int ans=power(a,b);
	printf(" ans = %d", ans);
	return 0;
}
