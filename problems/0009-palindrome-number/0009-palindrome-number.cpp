class Solution {
public:
    bool isPalindrome(int x) {
        
        int input = x;
        long reversed=0;
        int digit;

        if(x<0)
            return false;

        while(x>0){
            digit=  x%10;
            reversed= reversed*10 + digit;
            x = x/10;
        }

        return input== reversed;
           
    }
};