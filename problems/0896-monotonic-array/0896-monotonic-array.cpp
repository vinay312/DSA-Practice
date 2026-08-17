class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        bool inc = true;
        bool dec = true;

        int n = nums.size();

        for(int i = 1; i<n; i++){
            if(nums[i-1] > nums[i]){
                inc = false;
            }
            if(nums[i-1] < nums[i]){
                dec = false;
            }
        }

        if(inc || dec)
            return true;
        
        return false;
        
    }
};