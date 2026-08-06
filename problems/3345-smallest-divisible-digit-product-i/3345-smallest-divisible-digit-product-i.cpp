class Solution {
public:
    int smallestNumber(int n, int t) {

        int product = 1;
        int num = n;
        int digit;

        while(num > 0){
            digit = num % 10;
            num = num/10;
            product *= digit;                    
        }

        if(product % t == 0)
            return n;
        
        else 
            return smallestNumber(n+1, t);

        
    }
};