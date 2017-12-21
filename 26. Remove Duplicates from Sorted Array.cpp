class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //vector<int> ans;
        if (nums.size()==0)return 0;
        //ans.resize(nums.size());
        //ans[0] = nums[0];
        int l=0;
        for (int i = 1; i< nums.size(); i++){
            //ans[i] = nums[i];
            if(nums[i] != nums[l])nums[++l]=nums[i];
            //ans.push_back(nums[i]);
        }
        return l+1;
    }
};