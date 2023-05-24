class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int max1 = 0;
        int min1 = prices[0];
        for(int i =0; i<prices.size(); i++)
        {
            min1 = min(min1, prices[i]);
            int profit = prices[i] - min1;
            max1 = max(max1, profit);
        }
        return max1;
    }
};