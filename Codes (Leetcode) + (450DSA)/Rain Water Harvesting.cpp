#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
	
	int right_end(int a, vector<int>&arr, int end){
		int max=INT_MIN;
		for(int i=a;i<=end;i++){
			if(arr[i] > max){
				max=arr[i];
			}
		}
	
		return max;
	}
	
	int left_start(int a, vector<int>&arr, int start){
		int max=INT_MIN;
		for(int i=a;i>=start;i--){
			if(arr[i] > max){
			//	cout<<endl<<"arr[i] "<<arr[i] << "max is "<<max <<endl;
				max=arr[i];
			//	cout<<"final is "<<max<<endl;
			}
		}
		
		return max;
	}	
	
    int trap(vector<int>& arr) { 
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
        //cout<<"start is "<<start<<" end is "<<end<<endl;
        int ans=0;
        for(int k =start+1; k<end; k++){

	       	int left=left_start(k, arr, start);
	       	int right= right_end(k,arr, end);
	       	int temp=min(left, right);
	       	
	       	if(temp - arr[k] > 0){
	       		ans+=temp - arr[k];
	     
			}
	   }
	   
//	cout<<"ans is "<<ans<<endl;
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

6
4 2 0 3 2 5 -1

 1 1 5 2 7 6 1 4 2 3 -1
*/