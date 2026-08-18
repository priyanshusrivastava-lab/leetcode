class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0,h=n*m-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int r=mid/m;
            int c=mid-m*r;
            if(target==matrix[r][c])
            return true;
            else if(target>matrix[r][c])
            l=mid+1;
            else{
                h=mid-1;
            }
        }
        return false;
    }
};