class Solution {
public:
    int countCommas(int n) {
        if(n<999){
            return 0;
        }
        return abs(999-n);
        
    }
};