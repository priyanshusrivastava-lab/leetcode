class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(nums[mid]<nums[mid+1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
       
                
            }
        
        
       return st;
    }
};