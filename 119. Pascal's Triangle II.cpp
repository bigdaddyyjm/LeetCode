class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i = 1; i <= rowIndex+1; i++){
            ans.push_back(1);
            for(int j = ans.size()-2; j > 0; j--){
                ans[j] += ans[j-1];
            }
        }
        return ans;
    }
};