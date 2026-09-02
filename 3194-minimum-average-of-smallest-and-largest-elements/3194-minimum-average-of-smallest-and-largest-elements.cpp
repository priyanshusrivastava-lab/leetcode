class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        int minsum=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            int current=nums[i]+nums[n-i-1];
            minsum=min(minsum,current);
       
        }

          return minsum/2.0;;
      
     
        
    }
};