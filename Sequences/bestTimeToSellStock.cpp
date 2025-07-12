    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>buy){
                if(prices[i]-buy > profit){
                    profit = prices[i]-buy;
                }
            }else{
                buy = prices[i];
            }
        }
        return profit;
    }