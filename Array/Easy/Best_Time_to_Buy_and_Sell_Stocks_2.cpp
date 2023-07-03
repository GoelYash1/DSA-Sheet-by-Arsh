#include <vector>
using namespace std;
class Solution {
public: 
    int helperSpaceOptimized(vector<int>& prices){
        int n = prices.size();
        vector<int>curr(2,0);
        vector<int>next(2,0);
        for(int idx = n-1;idx>=0;idx--){
            for(int canBuy = 0;canBuy<=1;canBuy++){
                int profit = 0;
                if(canBuy){
                    profit = max(-prices[idx] + next[0],next[1]);
                }
                else{
                    profit = max(prices[idx] + next[1],next[0]);
                }
                curr[canBuy] = profit;
            }
            next = curr;
        }
        return next[1];
    }
    int maxProfit(vector<int>& prices) {
        return helperSpaceOptimized(prices);
    }
};

