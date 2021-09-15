class Solution {
public:
    void helper(vector<int>&nums, int j){
	//print(nums);
	int ans=INT_MAX;
	int temp;
	int s=nums[j];
	int i=0;
	int pos=0;
	for(i=j+1;i<nums.size();i++){
		temp=nums[i];
		if(temp>s && temp<=ans){
			pos=i;
			ans=temp;
		}
	}
	//cout<<"swap "<<ans<<" and "<<nums[j]<<endl;
	//return i;
	swap(nums[pos], nums[j]);
	
}

    void nextPermutation(vector<int>& nums) { 
        int flag=0;
        int j,i,n=nums.size();
        i=n-1;
        j=i-1;
        for(i=n-1;i>0;){
            if(nums[j] < nums[i])
                flag=1;
            if(nums[j]>=nums[i]){
                //flag=1;
                j--;
                i--;
            }
            else{
                //flag=1;
                break;
            }

        }
        if(flag==0){
         //   print(nums);
            sort(nums.begin(), nums.end());
           // print(nums);
            return;
        }
        helper(nums,j);
        //swap(nums[j], nums[p]);
        reverse(nums.begin()+j+1, nums.end());
      //  print(nums);
        return;
        
    }
};