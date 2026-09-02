class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        vector<int>nums2(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums2[i]==nums1[i]){
                  return false;
                }
                else if(j!=i){
                    nums2[i]=nums1[i]-nums1[j];
                }
            }
        }
        return true;
    }
};