class Solution {
public:
    int lengthOfLastWord(string s) {

        int endIndex, startIndex;


        int i = s.size()-1;

        while(i>=0 && s[i]==' '){
            i--;
        }

        
        

        endIndex= i;

        while(i>=0 && s[i] != ' ' ){
            i--;
        }

        startIndex = i+1;

        return endIndex-startIndex+1;
    }
        
};