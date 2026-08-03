class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        
        if (n==0){
            return 0;
        }
        int longest=1;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else if(nums[i]==nums[i-1]){
                
                continue;
            }
                else{
                    longest=max(longest,count);
                    count=1;
                
            }

        }
        return max(longest,count);
    }
};