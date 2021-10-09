 #include<iostream>
 #include<string>
 using namespace std;

#include<bits/stdc++.h>
 int main(){
 	string s="abcdef";
 	transform(s.begin()+1, s.end()-1, s.begin()+1, ::toupper);
 	cout<<s<<endl;;
 	
 	// lower to upper
 	string s2="lokesh";
 	int x=32;
 	for(int i=0;i<s2.length();i++){
 		s2[i]=s2[i] &~x;
	 }
 	cout<<s2<<endl;;
 	
 	// upper to lower
 	
 	for(int i=0;i<s2.length();i++){
 		s2[i]=s2[i] |x;
	 }
 	cout<<s2<<endl;

 }
