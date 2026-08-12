class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n  = nums.size();
        vector<int> nums2n(2*n, 0); 

        for(int i = 0; i<n ; i++){
            nums2n[i] = nums[i];
            nums2n[n + i] = nums[i];

        }

        return nums2n;
        
    }
};