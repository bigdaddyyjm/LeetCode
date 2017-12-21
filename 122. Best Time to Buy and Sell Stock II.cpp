class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()||prices.size()==1)return 0;
        for(int i = prices.size()-1; i > 0; i--){
            prices[i] -= prices[i-1];
        }
        prices[0]=0;
        int ans=0;
        for(int j = 0; j < prices.size(); j++){
            if(prices[j] > 0)ans+=prices[j];
        }
        return ans;
    }
};