class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int biggerCount = 0;
        int minNum = nums[0];
        int minIndex = 0;
        for(int i = 1; i < nums.size(); i++){
            if (nums[i] <= minNum){
                minIndex = i;
                minNum = nums[i];
            } 
        }
        for(int j = 0; j < minIndex; j++){
            if (nums[j] > nums[minIndex])biggerCount++;
        }
        //checkPossibility(nums[minIndex+1]);
        if (biggerCount > 1)return false;
        else return true;
    }
};