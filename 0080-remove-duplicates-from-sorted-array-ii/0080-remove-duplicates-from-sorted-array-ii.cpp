class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
       int duplicate=nums[0];
       int k=1;
       for(int i=1;i<nums.size();i++){
        if(nums[i]==duplicate){
            count++;

        }
        else{
        duplicate=nums[i];
        count=1;
        }
           
       if(count<=2) {
        nums[k]=nums[i];
        k++;
       }  
       }
       return k;
    }
};