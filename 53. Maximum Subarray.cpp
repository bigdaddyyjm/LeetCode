class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0]; int maxEndingHere = 0;
        for(int i = 0; i < nums.size(); i++){
            maxEndingHere += nums[i];
            maxSoFar = max(maxSoFar,maxEndingHere);
            if(maxEndingHere < 0)maxEndingHere = 0;
        }
        return maxSoFar;
    }
};