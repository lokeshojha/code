class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int temp=0;
        int sum2=accumulate(nums.begin(), nums.end(),temp);
        return sum-sum2;
    }
};
/*
optimized approach 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int temp=0;
        int sum2=accumulate(nums.begin(), nums.end(),temp);
        return sum-sum2;
    }
};

*/
