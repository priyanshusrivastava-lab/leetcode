class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        vector<int>preffix(nums.size(),1);
        vector<int>suffix(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            preffix[i]=preffix[i-1]*nums[i-1];
        } 
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
       for(int i=0;i<nums.size();i++){
        ans[i]=suffix[i]*preffix[i];
       }
        
        
        return ans;
    }
};
        
      
        