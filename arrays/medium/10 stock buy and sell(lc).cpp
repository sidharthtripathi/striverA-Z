class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxProfit = 0;
      int n = prices.size();
      for(int i= 0 ;i<n ; i++){
          for(int j = i ; j>=0 ; j--){
              int profit = prices[i] - prices[j];
              maxProfit = max(profit,maxProfit);
          }
      }
      return maxProfit;
    }
};