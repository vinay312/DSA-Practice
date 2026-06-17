class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int required,i;
        for(i=0; i<nums.size(); i++){
            required= target - nums[i];

            if(mpp.find(required)!= mpp.end()){
                return {mpp[required], i};
            }
            
            mpp[nums[i]]=i;

        }
         
         return {};
    }  
};