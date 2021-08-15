class Solution {
public:
    vector<vector<int>>  helper(vector<int>& nums){
	if(nums.size()==1){
		vector<vector<int> >ans;
		vector<int>n;
		ans.push_back(n);
		ans.push_back(nums);
		return ans;
	}
	int temp=nums[0];
	vector<int>num2;
	for(int i=1;i<nums.size();i++){
		num2.push_back(nums[i]);
	}
	vector<vector<int>>ans;
	vector<vector<int>>ans2;
	ans2=helper(num2);// {} {3}
	for(int i=0;i<ans2.size();i++){
		ans.push_back(ans2[i]);   // {} {3} 
	}
	for(int i=0;i<ans2.size();i++){
		ans2[i].push_back(temp);  
        ans.push_back(ans2[i]);
    }
	return ans;
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    	set<vector<int>>s;
    	vector<vector<int>>ans;
    	vector<vector<int>>ans2;
       sort(nums.begin(), nums.end());
		ans=helper(nums);
		vector<vector<int>>::iterator it;
		for(it=ans.begin();it!=ans.end();it++)
			s.insert(*it);
		set<vector<int>>::iterator i;
		
		for(i=s.begin();i!=s.end();i++)
			ans2.push_back(*i);
		
		return ans2;
	
    }
};