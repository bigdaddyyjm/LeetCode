class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if((nums[i] == target)||(i == 0 && target < nums[i]))return i;
            if((i < nums.size()-1 && target > nums[i] && target < nums[i+1])||(i == nums.size()-1 && target > nums[i])) return i+1;
            // if(i == 0 && target < nums[i]) return i;
            // if(i == nums.size()-1 && target > nums[i]) return i+1;
        }
//         for(int i = 0; i < nums.size(); i++){
            
//         }
//         for(int i = 0; i < nums.size(); i++){
            
//         }
    }
};