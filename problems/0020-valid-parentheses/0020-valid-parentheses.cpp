class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, char> mpp ={
            {')','('} , {'}','{'} , {']', '['}
        };

        stack<char> sk;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{' )
                sk.push(s[i]);
            
            else{
                if(sk.empty())
                    return false;
                
                if(sk.top() != mpp[s[i]])
                    return false;

                
                sk.pop();
            }

        }
            return sk.empty();
        
    }
};