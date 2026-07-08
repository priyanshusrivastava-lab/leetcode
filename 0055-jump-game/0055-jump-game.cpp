class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        
        int maxcount=0;
        
            for(int i=0;i<n;i++){
                if(i>maxcount){
                    return false;
                }
                    maxcount=max(maxcount,i+nums[i]);
                

            
        

        }
        return true;
    }
};