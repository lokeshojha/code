class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>output;
        int sum=0;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            output.push_back(i);
            int flag=0;
            for(int j=i+1;j<arr.size();j++){
                sum+=arr[j];
                if(sum==target){
                    output.push_back(j);
                    flag=1;
                    break;
                }
                else
                    sum-=arr[j];
            }
            if(flag==1){
                break;
            }
            sum=0;
            output.clear();
            
        }
        return output;
    }
};
