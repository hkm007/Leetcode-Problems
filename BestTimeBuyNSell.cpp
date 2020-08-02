// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int res = 0, n = prices.size();
        int arr[n];
        arr[n-1] = prices[n-1];
        
        for(int i = n-2; i >= 0; i--) {
            arr[i] = max(arr[i+1], prices[i]);
        }
        
        for(int i = 0; i < n; i++) {
            res = max(res, (arr[i]-prices[i]));
        }
        
        return res;
    }
};