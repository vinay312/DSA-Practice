class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int posIn=0, negIn=1;
        vector<int> ans(n,0);

        for(int i=0; i<n; i++){
            if(nums[i]>0){
                ans[posIn]= nums[i];
                posIn += 2;
            }
            
            else{
                 ans[negIn]= nums[i];
                 negIn += 2;
            }
        }

        return ans;
    }
};