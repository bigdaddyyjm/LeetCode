class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()||prices.size()==1)return 0;
        for(int i = 0;i < prices.size()-1; i++){
            prices[i] = prices[i+1]-prices[i];
        }
        vector<int> dp;
        dp.resize(prices.size());
        dp[0]=prices[0];
        int maxProfit = dp[0];
        for(int j = 1; j < prices.size()-1; j++){
            dp[j] = prices[j] + (dp[j-1] > 0 ? dp[j-1]:0);
            maxProfit = max(dp[j],maxProfit);
        }
        if(maxProfit >= 0) return maxProfit;
        else return 0;
    }
};