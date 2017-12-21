class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> last_tmp;
        last_tmp.push_back(1);
        for(int i = 1; i <= numRows; i++){
            vector<int> tmp;
            for( int j = 0; j < i; j++){
                if(j==0||j==i-1){
                    tmp.push_back(1);
                } else{
                    tmp.push_back(last_tmp[j-1]+last_tmp[j]);
                }
            }
            ans.push_back(tmp);
            last_tmp.assign(tmp.begin(),tmp.end());
        }
        return ans;
    }
};