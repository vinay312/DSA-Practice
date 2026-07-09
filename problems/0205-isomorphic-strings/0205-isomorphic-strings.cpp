class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> mpp;
        unordered_set<char> used;

        for(int i= 0; i<s.length(); i++){
            if(mpp.find(s[i]) != mpp.end()){
                if(t[i] != mpp[s[i]])
                    return false;
                
            }

            else{
                if(used.find(t[i]) != used.end())
                    return false;

                mpp[s[i]] = t[i];
                used.insert(t[i]);
            }

        }

        return true;
        
    }
};