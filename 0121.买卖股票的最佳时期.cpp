#include"solution.h"

int maxProfit(vector<int>& prices) {
    int minprice = INT_MAX; 
    int res = 0;
    int n = prices.size();
    for (int i = 0; i < n; ++i)
    {
        res = max(res, prices[i] - minprice);
        minprice = min(minprice, prices[i]);
    }
    return res;
}