class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        unordered_map<int, int> mpp;
        int minInt= nums[0];
        int maxInt= nums[0];

        vector<int> ans;

        for(int i = 0; i< nums.size(); i++)
            mpp[nums[i]]++;
        
        
        for(int i = 0; i<nums.size(); i++){

            minInt= min(minInt, nums[i]);
            maxInt= max(maxInt, nums[i]);
            
        }

        for(int i=minInt; i<= maxInt; i++){
            if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
            }            
        }

        return ans;
    }
};