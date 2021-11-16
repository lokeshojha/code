#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<bits/stdc++.h>
void print(vector<int>&v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int helper(vector<int>&nums){
	if(find(nums.begin(), nums.end(), 1)==nums.end())
		return 1;
	int n = nums.size();
	for(int i=0;i<n;i++){
		if(nums[i]>=n || nums[i]<0){
			continue;
		}
		if(nums[i]!=i){
			while(1){
				if((nums[i] == i) || (nums[i]<0) || (nums[i] >= n)) {
					break;
				}
				else{
					int temp=nums[i]; //4
					int temp2=nums[temp];  //7
					if(temp==temp2){
						break;
					}
					swap(nums[i], nums[temp]);
				}
			}
		}
	}
//	print(nums);
	int i=1;
	for(i=1;i<n;i++){
//		if(nums[i]<=0){
//			continue;
//		}
		if(nums[i]!=i){
			//cout<<"lol"<<endl;
			return i;
		}
			
	}
    int max = *max_element(nums.begin(), nums.end());
    //cout<<"max is "<<max<<endl;
	return	max > n ?  i : max+1;
}
int main(){
	vector<int>v = {-1,1,4};
	int ans=helper(v);
	cout<<ans;
	
}