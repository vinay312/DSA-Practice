class Solution {
public:
    int lengthOfLastWord(string s) {

        int end, start;

        int i = s.size() - 1;

        while(i>=0 && s[i]==' ')
            i--;
        
        end =i;

        while(i>=0 && s[i] != ' ')
            i--;
        
        start= i+1;

        int lastlen = end - start +1;

        return lastlen;
    }
        
};