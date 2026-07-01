class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        int unique=0;
        for( int i=1;i<n;i++){
            if(nums[i]!=nums[unique]){
                unique++;
            
            nums[unique]=nums[i];
        }
        }
        return unique+1;
        
            
                


                
            
        
        
        
    }
};