class Solution {
public:

    void stringReverse(int i,int n, vector<char>& s){
         if(i>= n/2)
            return;

        swap(s[i], s[n-1-i]);

        stringReverse(i+1,n,s);
        
    }
    void reverseString(vector<char>& s) {

       
        int n = s.size();

        stringReverse(0,n, s);

        
        
    }
};