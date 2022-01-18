#include<bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int>& prices){
//     int profit = 0;
//     for(int i = 0; i < prices.size()-1; i++){
//         if(prices[i] < prices[i+1]){
//             profit += prices[i+1] - prices[i];
//         }
//     }
//     return profit;
// }

int maxProfit(vector<int>& prices) {
        vector<pair<int, int>> profit(prices.size(), {0, 0});
        
        if (prices.empty()) {
            return 0;
        }
        
        profit[0].first = -1 * prices[0];
        profit[0].second = 0;
        for (int i = 1; i < prices.size(); ++i) {
            profit[i].first = max(profit[i - 1].first, profit[i - 1].second - prices[i]);
            profit[i].second = max(profit[i - 1].first + prices[i], profit[i - 1].second);
        }
        
        return profit[prices.size() - 1].second;
}

int main(){
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices) << endl;
    return 0;
}