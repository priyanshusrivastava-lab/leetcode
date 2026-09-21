class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int moves=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            count++;
        }
        else{
            count=1;
        }
        moves+=(nums[i]-nums[0]);
    }
        return moves;
    }
};