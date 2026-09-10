#include <climits>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = INT_MAX;
        int profit = 0 ;

        for (int price : prices){
            if (price < minBuy){
                minBuy = price ;
            }
            if (price - minBuy > profit){
                profit = price - minBuy;
            }
        }


        return profit ;
    }
};