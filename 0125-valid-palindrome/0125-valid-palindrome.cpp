class Solution {
public:
bool isAlphaNum(char ch){
    if(! isalnum(ch)){
        return false;
    }
        else{
            return true;
        }
    
}
    bool isPalindrome(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<end){
            if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
            if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
            if(tolower(s[st])!= tolower(s[end])){
                return false;
            }
            st++;
            end--;
            }
        

        return true;
    }
};