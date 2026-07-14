class Solution {
public:
    int maxDepth(string s) {

        int a=0;
        int maxp=0;

        for(char ch : s){
            if(ch == '(')
                a++;
            else if(ch== ')')
                a--;
            
            maxp= max(a, maxp);            
        }

        return maxp;
        
    }
};