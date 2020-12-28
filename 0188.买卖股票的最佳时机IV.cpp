int maxProfit(int k, vector<int>& prices) 
{
    int n = prices.size();
    if (n == 0) return 0;
    vector<int> dp(2*k+1,0);
    for (int i = 1; i < 2 * k; i += 2)
        dp[i] = -prices[0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 2 * k; j+=2)
        {
            dp[j] = max(dp[j], dp[j+1] + prices[i]);
            dp[j+1] = max(dp[j+1], dp[j+2] - prices[i]);
        }
    }
    return dp[0];
}
