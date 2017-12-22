class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int last_max = 0;
        nums.push_back(0);
        for(int i = 0; i <= nums.size(); i++){
            if(nums[i] == 0){
                last_max = max > last_max ? max:last_max;
                max = 0;
                continue;
            }
            max++;
        }
        return last_max;
    }
};
