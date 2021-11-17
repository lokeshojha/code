class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.find(nums[i])==m.end())
                m[nums[i]]=1;
            else
            {
                m[nums[i]]++;
            }
        }
        //map<int, int>::iterator it;
        for(auto& it : m){
            if(it.second==1)
                return it.first;
        }
        return 0;
    }
};
/*
optimized approach 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};

*/
