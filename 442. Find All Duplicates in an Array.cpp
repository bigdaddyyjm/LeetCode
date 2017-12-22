class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int m = abs(nums[i]) - 1;
            if(nums[m] < 0)ans.push_back(abs(nums[i]));
            nums[m] = nums[m] > 0 ? -nums[m]:nums[m];
        }
        return ans;
    }
};
