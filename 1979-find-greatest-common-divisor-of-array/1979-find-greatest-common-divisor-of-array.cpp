class Solution {
public:
    int findGCD(vector<int>& nums) {
         int small=*min_element(nums.begin(),nums.end());
         int big=*max_element(nums.begin(),nums.end());
        return gcd(small,big);

        

            
        
        
    }
};