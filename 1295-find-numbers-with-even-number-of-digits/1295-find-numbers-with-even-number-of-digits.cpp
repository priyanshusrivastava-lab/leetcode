class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int digitcount=0;
        
        for(int i=0;i<n;i++){
            int n=nums[i];
            int count=0;
            while(n>0){
           n=n/10;
           count++;
            }
           if(count%2==0){
            digitcount++;
           }
           
        
        }
        
        return digitcount;

        
    }
};