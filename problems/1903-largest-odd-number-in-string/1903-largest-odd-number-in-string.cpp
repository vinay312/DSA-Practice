class Solution {
public:
    string largestOddNumber(string num) {

        int end= -1;
        string result= "";
        int i= num.size()-1;

        while(i>=0){
            if((num[i]-'0')%2 != 0){
                end= i;
                break;
            }

            i--;
        }

        if(end == -1)
            return "";

        for(int i=0; i<=end; i++){
            if(num[i]== '0' && result.empty()){
                continue;
            }

            else
                {
                    result += num[i];
                }
        }

        return result;
    }
};