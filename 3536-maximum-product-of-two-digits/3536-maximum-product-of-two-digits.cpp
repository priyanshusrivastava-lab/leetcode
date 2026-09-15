class Solution {
public:
    int maxProduct(int n) {
        int temp=n;
        vector<int>ans;
        while(temp>0){
        int digit = temp%10;
        ans.push_back(digit);
        temp/=10;
        }
        sort(ans.begin(),ans.end());
        int a=ans[ans.size()-1];
        int b=ans[ans.size()-2];
        return a*b;
    }
};