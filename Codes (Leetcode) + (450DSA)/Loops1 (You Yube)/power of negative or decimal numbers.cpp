#include<stdio.h>
//6 -3
//6 3
double power(double a, double b){ 
	double ans=1;
	double c=0;
	if(b<0){
		 c=0;
		c=b;  //c=-3
		b=b*-1;   //b=-3*-1 = 3
	}
	for(int i=0;i<b;i++){
		ans=a*ans;
	}
	if(c<0){
		return 1/ans;
	}
	
	return ans;
}
int main(){
	double a, b;
	printf("enter values of a and b\n");
	scanf("%lf%lf",&a,&b);
	//5 2
	double ans=power(a,b);
	printf(" ans = %0.3lf", ans);
	return 0;
}
