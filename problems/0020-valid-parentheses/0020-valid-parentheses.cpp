class Solution {
public:
    bool isValid(string s) {

        stack<int> stk;
        int n = s.size();

        for(int i = 0; i<n; i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stk.push(s[i]);
            else{
                if(stk.empty())
                    return false;
                char ch= stk.top();
                stk.pop();

                if((s[i]==')' && ch == '(') || (s[i]==']' && ch == '[') || (s[i]=='}' && ch == '{'))
                    continue;
                else
                    return false;

            }
        }
        return stk.empty();
    }
};