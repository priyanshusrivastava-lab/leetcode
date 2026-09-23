class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int b=0;
        sort(nums.begin(),nums.end());
        int target=nums[n/2];
        for(int i=0;i<n;i++){
            if(target<nums[i]){
                b+=nums[i]-target;
                
            }
                else if(target>nums[i]){
                    c+=target-nums[i];
                }
                else{
                    continue;
                }
            
        }
        return b+c;
    }
};