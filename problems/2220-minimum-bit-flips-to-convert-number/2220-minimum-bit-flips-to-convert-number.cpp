class Solution {
public:
    int minBitFlips(int start, int goal) {

        int ans = start ^ goal; //----> out ans will have those bits set to 1 which need to be flipped to get the goal

        int count = 0;

        for(int i = 0; i<32; i++){
            if(ans & (1<<i)) //--->traversing ans for number of ones as it is equal to number of bits that needs to be flipped;
                count++;
            
        }

        return count;
        
    }
};