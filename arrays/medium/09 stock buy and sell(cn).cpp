int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    int maxProfit = 0;
    for(int i = 0 ; i<n ;i++){
        int profit = 0;
        for(int j = i ; j>=0 ; j--){
            profit = prices[i] - prices[j];
            maxProfit = max(profit,maxProfit);
        }
    }
    return  maxProfit;

}

