class Solution {
public:
bool ispal(string s,int l,int r){
    int n=s.size();
    while(l<r){
        if(s[l]!=s[r])
        return false;
        l++;
        r--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        bool flag=true;

        while(i<j){
            if(s[i]!=s[j]){
                return ispal(s,i+1,j)|| ispal(s,i,j-1);
            }else{
                i++;
                j--;
            }
        }
        return true;
        
    }
};