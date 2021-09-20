class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buy=INT_MAX, profit=0, overall_profit=0, sell=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=buy){
            buy=arr[i];
           // cout<<"buy "<<buy<<endl;
            overall_profit+=profit;
            cout<<arr[i]<<" - "<<buy<<endl;
            //cout<<"overall profit"<<overall_profit<<endl;
            profit=0;
            continue;
        }
        if(arr[i]>buy){
            if(arr[i]-buy < profit){
                cout<<arr[i]<<" - "<<buy<<endl;
                buy=arr[i];
               // cout<<"buy "<<buy<<endl;
                overall_profit+=profit;
              //  cout<<"overall profit"<<overall_profit<<endl;
                profit=0;
                continue;
            }
            else{
                sell=arr[i];
               // cout<<"sell "<<sell<<endl;
                profit=sell-buy;
              //  cout<<sell<<"-"<<buy<<"= "<<profit<<endl;
                }
            }
        }
        return overall_profit+profit;
    }
};