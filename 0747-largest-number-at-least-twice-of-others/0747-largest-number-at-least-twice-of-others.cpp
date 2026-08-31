class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans=nums;
        sort(ans.begin(),ans.end());
        int m=ans[n-1];
        int s=ans[n-2];
        
        if(m>=2*s){
            for(int i=0;i<n;i++){
                if(nums[i]==m){
            return i;
        }
        }
        }
        return -1;
        
    }
};