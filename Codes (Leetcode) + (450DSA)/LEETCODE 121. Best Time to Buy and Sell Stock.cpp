class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buy=INT_MAX;
        int sell=0;
        int profit=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] < buy){
                buy=arr[i];
                //cout<<"buy"<<endl;
                continue;
            }
            if(arr[i] - buy > profit){
                sell=arr[i];
                //cout<<"sell "<<sell;
                profit=sell-buy;
            }
        }
        return profit;
    }
};