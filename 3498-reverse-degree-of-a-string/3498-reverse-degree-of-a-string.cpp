class Solution {
public:
    int reverseDegree(string s) {

        int sum =0;

        for(int i =0; i<s.size(); i++){
            int revVal = (26 - (s[i]-'a'));
            int indProduct = revVal*(i+1);

            sum= sum + indProduct;
        }

        return sum;
        
    }
};