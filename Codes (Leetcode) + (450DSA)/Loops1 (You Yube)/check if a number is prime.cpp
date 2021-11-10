#include<stdio.h>
bool isPrime(int n){
	for(int i=2;i<n/2;i++){  //19
		if(n%i==0){       // 19%18
			return false;
		}   // i->19
	}
	return true;
}
bool isPrime2(int n){
	int count =0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count ++;
		}
	}
	if(count!=2){
		return false;
	}
	else
		return true;
}

int main(){
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	bool ans=isPrime(n);
	bool ans2=isPrime2(n);
		
	if(ans==false){
		printf("%d is not prime\n",n);
	}
	else{
		printf("%d is prime\n",n);
	}
	
	if(ans2==false){
		printf("%d is not prime(method 2)\n",n);
	}
	else{
		printf("%d is prime (method 2)\n",n);
	}
	
}
