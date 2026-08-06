class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int prod=1;
            int temp=n;
            int lastdigit=0;
            while(temp>0){
                lastdigit=temp%10;
                prod*=lastdigit;
                temp/=10;

            }
            if(prod%t==0)
               return n;
            n++;
                
            
        }
        }

    
        
};