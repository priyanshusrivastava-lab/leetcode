class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();        
       sort(nums.begin(),nums.end());
       if(n==1){
        return nums[0];
       }
        for(int i=0;i<nums.size()-2; i=i+3){
            if(nums[i]!=nums[i+1])
                return nums[i];

            if(nums[i+1]!=nums[i+2])
                return nums[i+2];
            }
            return nums.back();
        }
        };