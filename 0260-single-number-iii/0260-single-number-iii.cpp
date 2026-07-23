class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      int n=nums.size();
      int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^nums[i];
        }
       unsigned int diff=(unsigned int)ans & (-(unsigned int)ans);
     int x=0,y=0;
     for(int i=0;i<n;i++){
       
        if(nums[i]&diff){
            x=x^nums[i];
        }else{
            y=y^nums[i];
        }
     }
       return {x,y};
    }

     };
        

       