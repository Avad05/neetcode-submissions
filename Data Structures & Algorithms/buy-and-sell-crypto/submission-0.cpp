class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int l = 0;
        int r = l+1;
        while(r <= prices.size()-1){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                maxProfit = max(profit, maxProfit);
            }
            else{
                l = r;
            }
            r++;
        }
        return maxProfit;    
    }
};
