class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int currentsum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int result=0;
        for(int i=0;i<n;i++){
            currentsum+=(nums[i]==0?-1:1);
            if(mp.find(currentsum)!=mp.end()){
                result=max(result,i-mp[currentsum]);
            }
            else mp[currentsum]=i;
        }
        return result;
    }
};