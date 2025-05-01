class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n = (int) prices.size();
        vector <int> arr(n) ;
        arr[n - 1] = prices[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            arr[i] = max(prices[i], arr[i + 1]);
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, (arr[i] - prices[i] < 0 ? 0 : arr[i] - prices[i]));
        }
        return mx;
    }
};