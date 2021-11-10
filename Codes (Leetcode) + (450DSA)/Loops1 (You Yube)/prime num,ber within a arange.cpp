#include<stdio.h>
bool isPrime(int n){
	for(int i=2;i<n/2;i++){  //19
		if(n%i==0){       // 19%18
			return false;
		}   // i->19
	}
	return true;
}
void print_primes(int a , int b){
	if(b<a){
		int temp=a;
		a=b;
		b=temp;
	}
	if(a==b)
	return;
	int count=0;
	for(int i=a;i<=b;i++){
		bool ans=isPrime(i);
		if(ans==true){
			count++;
			printf("%d ",i);
		}
	}
	printf("\n there are %d prime numbers", count);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	print_primes(a,b);
	
}
