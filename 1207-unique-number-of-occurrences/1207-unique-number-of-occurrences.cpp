class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        int count=1;
        
        
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                count++;
                
            }
            else{
            ans.push_back(count);
            count=1;
            }
        }
        ans.push_back(count);
        for (int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
            if(ans[i]==ans[j]){
                return false;
            }
            }

        }
        return true;
    }
};