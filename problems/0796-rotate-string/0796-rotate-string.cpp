class Solution {
public:
    bool rotateString(string s, string goal) {
       int n= s.length();

        if(n != goal.length())
            return false;

        

        for(int i=0; i<n; i++){
            char first= s[0];
            string shift = s.substr(1, n-1) + first;

            if(shift == goal)
                return true;

            s= shift;
        }

        return false;
    }
};