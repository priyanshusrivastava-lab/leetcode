class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
     char smallest= '{';
        for(int i=0;i<n;i++){
            
            if(letters[i]>target){
               
                smallest=min(smallest,letters[i]);
            }
        }
            if(smallest=='{'){
             return letters[0];
        }
        
        return smallest;
    }
};