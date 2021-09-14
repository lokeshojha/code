class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
	vector<int>temp;
	sort(v.begin(), v.end());
	
	for(int i=0;i<v.size();){
		int j=i;
		int end_point = v[i][1];
		int start_point=v[i][0];
		for(j=i;j<v.size();){
			int flag=0;
			if(v[j][0]<=end_point){
				flag=1;
				if(v[j][1]>end_point)
					end_point=v[j][1];
			}
			if(flag==0){
				break;
			}
			j++;
		}
		temp.push_back(start_point);
		temp.push_back(end_point);
		
		ans.push_back(temp);
		temp.clear();
		i=j;
	}
	return ans;
    }
};
