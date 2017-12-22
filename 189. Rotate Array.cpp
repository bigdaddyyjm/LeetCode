class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size();
        for(int i = 0; i < n - k; i++){
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.begin()+n-k);
    }
};
