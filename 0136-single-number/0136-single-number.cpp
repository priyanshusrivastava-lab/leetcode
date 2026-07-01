class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=0;
        for(int val: nums){
            count=count^val;
        }
        return count;
        
    }
};