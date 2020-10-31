#include<climits>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buyPrice=INT_MAX;
        int maxEle=INT_MIN;
        if(prices.size()==0){
            return 0;
        }
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buyPrice){
                buyPrice=prices[i];
            }
            maxEle=max(maxEle,prices[i]-buyPrice);
        }
        return maxEle;
    }
};
