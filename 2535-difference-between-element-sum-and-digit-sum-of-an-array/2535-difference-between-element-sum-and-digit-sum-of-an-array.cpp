class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int digitsum=0;
        int diff;
        
        
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
             int n=nums[i];
        
        while(n>0){
            digitsum+=n%10;
             n/=10;
        
        }
        }
        return abs(sum-digitsum);
    }
};