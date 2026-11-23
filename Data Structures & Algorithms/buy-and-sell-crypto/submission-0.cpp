class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN;
        int minx = prices[0];

        for(int i=1;i<prices.size();i++){
            ans = max(prices[i] - minx, ans);
            minx = min(minx, prices[i]);
        }

        return ans > 0 ? ans : 0;
    }
};
