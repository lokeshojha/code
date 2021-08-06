#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
	
int trap (vector<int>&arr){
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	if(arr.size()<3)
  		return 0;
    	int f=0;
    	//arr.push_back(f);
        int n= arr.size();
        int j=n-2;
        int i=n-1;
        int end=n;
        int flag=0;
        while(j>=0){
            if(arr[j] < arr[i]){
            	flag=1;
                end=i;
                break;
            }
            j--;i--;
        }
        if(flag==0){
        //	cout<<"bhaag"<<endl;
        	return 0;
		}
        i=0;
        j=1;
        int start=0;
        int flag2=0;
        while(i<=end){
            if(arr[j] < arr[i]){
            	 flag2=1;
                start=i;
                break;
            }
            i++;j++;
        }
        if(flag2==0){
        	//cout<<"nikal";
        	return 0;
		}
		if(start == end){
			return 0;
		}
		for(int k=start;k<=end;k++){
			v3.push_back(arr[k]);
		}
//		cout<<"v3 is "<<endl;
//		for(int i=0;i<v3.size();i++){
//			cout<<v3[i]<<" ";
//		}
//		cout<<endl;
		int m1=-1, m2=-1;
		for(int i=start, j= end;i<=end,j>=start;i++,j--){
			if(arr[i] > m1){
				m1=arr[i];
			}
			if(arr[j] > m2){
				m2=arr[j];
			}
			v1.push_back(m1);
			v2.push_back(m2);
		}
		reverse(v2.begin(),v2.end());
	//	cout<<"v2 is "<<endl;
	//	for(int i=0;i<v2.size();i++){
	//		cout<<v2[i]<<" ";
	//	}
	//	cout<<endl;
	//	cout<<"v1 is "<<endl;
	//	for(int i=0;i<v1.size();i++){
	//		cout<<v1[i]<<" ";
	//	}
	//	cout<<endl;
		int ans=0;
		for(int i=0;i<v3.size();i++){
			int minm=min(v1[i],v2[i]);
			ans+=minm-v3[i];
		}
	//	cout<<ans<<endl;
		return ans;
}
int main(){
	vector<int>arr;
	int a;
	cin>>a;
	while(a!=-1){
		arr.push_back(a);
		cin>>a;
		
		
	}
	int ans = trap(arr);
//	co"trapped water is "<<ans<<endl;;
}

/*
10

0 2 1 3 0 1 2 1 2 1 -1
1 1 6 1 3 2 7 0 6 1 4 2 3 -1
6
4 2 0 3 2 5 -1

 1 1 5 2 7 6 1 4 2 3 -1
*/