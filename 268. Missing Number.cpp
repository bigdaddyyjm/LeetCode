class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //int numsSize = nums.size();
        int max=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>max) max=nums[i];
        }
        vector<int> ans;
        ans.resize(max+1,-1);
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]=1;
        }
        for (int i=0;i<ans.size();i++){
            if (ans[i]==-1)return i;
        }
        if (ans[0]==1)return ans.size();
        else return 0;
    }
};