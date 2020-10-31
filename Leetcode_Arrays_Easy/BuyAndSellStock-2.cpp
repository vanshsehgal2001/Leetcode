class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buyPrice,sellPrice;
        int i=0;
        if(prices.size()==1){
            return 0;
        }
        while(i<prices.size()-1){
            while(i<prices.size()-1 && prices[i]>=prices[i+1]){
                i++;
            }
            buyPrice=prices[i];
            while(i<prices.size()-1 && prices[i]<prices[i+1]){
                i++;
            }
            sellPrice=prices[i];
            
            profit+=sellPrice-buyPrice;
        }
        return profit;
    }
};
