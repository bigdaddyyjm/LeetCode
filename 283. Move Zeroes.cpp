class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int beforeSize = nums.size();
        int zeroNum = 0;
        for(int i = 0; i < beforeSize; i++){
            if(nums[i] != 0){
                //nums.erase(nums.begin()+i);
                nums.push_back(nums[i]);
            } else{
                zeroNum++;
            }
        }
        nums.erase(nums.begin(),nums.begin()+beforeSize);
        while(zeroNum){
            nums.push_back(0);
            zeroNum--;
        }
    }
};