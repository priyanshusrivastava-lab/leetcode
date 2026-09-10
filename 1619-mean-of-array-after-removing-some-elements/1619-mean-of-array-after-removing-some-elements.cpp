class Solution {
public:
    double trimMean(vector<int>& arr) {
        int  n=arr.size();
        int sum=0;
       
        sort(arr.begin(),arr.end());
        int remove =(n*5)/100;
        for(int i=remove;i<n-remove;i++){
            sum+=arr[i];
           
            
            }
            
               
            return (double)sum/(n-(remove+remove));


    }
};