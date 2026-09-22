class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max=0,min=0;
        for(int i=0;i<k;++i){
            min+=nums[i];
            max+=nums[n-i-1];

        }
        return max-min;
    }
      
};