#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxi = -1;
        int diff = 0;
        for(int i = 1;i<n;i++)
        {
            if(prices[i]<mini)
            {
                mini = prices[i];
                maxi = -1;
            }
            else if(prices[i]>maxi){
                maxi = prices[i];
            }
            else{
                continue;
            }
            diff = max(maxi - mini,diff);
        }
        return diff;
    }
};