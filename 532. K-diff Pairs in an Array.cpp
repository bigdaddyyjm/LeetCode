class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0)return 0;
        if(k == 0){
            int cnt = 0;
            map<int,int> tmp;
            for(int i = 0; i < nums.size(); i++){
                if(tmp.find(nums[i])!=tmp.end() && tmp[nums[i]] == 0) {
                    cnt++;
                    tmp[nums[i]]=1;
                } else {
                    tmp.insert(pair<int,int>(nums[i],0));
                }
            }
            return cnt;
        } else {
            int cnt = 0;
            map<int,int> res;
            map <int, int> :: iterator it;
            for(int i = 0; i < nums.size(); i++){
                res.insert(pair<int,int>(nums[i],0));
            }
            for(it = res.begin(); it != res.end(); it++){
                if(res.find(it->first+k)!=res.end() && res[it->first+k] == 0){
                    cnt++;
                    //res.erase(nums[i]+k);
                    //res[nums[i]] = 1;
                }
                if(res.find(it->first-k)!=res.end() && res[it->first-k] == 0){
                    cnt++;
                    //res.erase(nums[i]-k);
                    //res[nums[i]] = 1;
                }
                it->second = 1;
            }
            return cnt;
        }
    }
};
