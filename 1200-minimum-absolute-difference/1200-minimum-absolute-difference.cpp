class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        int mindiff=INT_MAX;
        int diff=0;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
         diff= abs(arr[i]-arr[i-1]);
        if(diff<mindiff){
            mindiff=diff;
            ans.clear();
        
        ans.push_back({arr[i-1],arr[i]});
        } else if(mindiff==diff){
            ans.push_back({arr[i-1],arr[i]});

        }
            }
            return ans;
        }
        
};