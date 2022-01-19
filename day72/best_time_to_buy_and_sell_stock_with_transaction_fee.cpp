#include<bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int>& prices, int fee){
//     int n = prices.size();
//     if(n == 0) return 0;
//     int profit=0;
//     for(int i = 1; i < n; i++){
//         if(prices[i] - prices[i-1] - fee>0) profit+=prices[i] - prices[i-1] - fee;
//         // else profit = 0;
//     }
//     return profit;
// }

int maxProfit(vector<int>& prices, int fee){
    int n = prices.size();
    // if(n == 0) return 0;
    // vector<int>buy(n,0);
    // vector<int>sell(n,0);
    // buy[0] = -prices[0]-fee;
    // for(int i = 1; i < n; i++){
    //     buy[i] = max(buy[i-1],sell[i-1]-prices[i]-fee);
    //     sell[i] = max(sell[i-1],buy[i-1]+prices[i]-fee);
    // }
    // return sell[n-1];
    int sold =0;
    int buy = -prices[0];
    for(int i=1; i<n; i++){
        int prevbuy = buy;
        buy = max(buy, sold-prices[i]);
        sold = max(sold, prevbuy+prices[i]-fee);
    }
    return sold;
}

int main(){
    vector<int> prices = {1,3,2,8,4,9};
    int fee = 2;
    cout<<maxProfit(prices, fee)<<endl;
    return 0;
}