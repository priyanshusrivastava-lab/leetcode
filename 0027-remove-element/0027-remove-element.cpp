class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       
        int n=nums.size();
        int remove=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
               nums[remove]=nums[i];
            
            remove++;

            }


        }
        return remove;
        
    }
};