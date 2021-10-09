/*
Convert string to integers and vice versa
*/
#include<iostream>
#include<string>
#include<sstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
/*---------------------string containing only digits---------------------------*/

	// convert string to long long
	string s1="10236547878954";
	long long  n=stoll(s1);
	cout<<n<<endl;
	
	// converting string to long
	string s2="987654321";
	long n2=stol(s2);
	cout<<n2<<endl;
	
	// converting string to integer using stoi()
	string s3="123";
	int n3=stoi(s3);
	cout<<n3<<endl;
	
	//converting string to integer using stringstream
	/*we can say that stringstream is an inbuilt class and ss is and object of class stringstream*/
	string s4="45678";
	stringstream ss(s4);
	int n4=0;
	ss>>n4;
	cout<<n4<<endl;
	
	/*-----------string containg both digits and alphabets-------------------------*/
	string s5="abcd10234efgh456";
 	string s6="";
 	for(int i=0;s5[i]!='\0';i++){
 		if(s5[i]>='0' && s5[i]<='9'){
 			s6+=s5[i];
 			
		 }
 		
	 }
 	cout<<s6<<endl;
 	int n=stoi(s6);
 	cout<<n<<endl;;
	
	/*-----------------integer to string ---------------------*/
	int i=20;
	double f=20.32;
	
	string s7=to_string(i);
	cout<<s7<<endl;
	string s8=to_string(f);
	cout<<s8<<endl;
	return 0;
}

