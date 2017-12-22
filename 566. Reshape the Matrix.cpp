class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int old_c = nums.size();
        //int old_r = 1;
        int old_r = nums[0].size();
        
        if(old_r * old_c != r * c){
            return nums;
        } 
        
        vector<vector<int>> res(r, vector<int>(c, 0));
        for(int i = 0; i < r*c; i++){
            res[i/c][i%c] = nums[i/old_r][i%old_r];
        }
        return res;
        
    }
};
