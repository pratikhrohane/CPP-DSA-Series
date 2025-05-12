// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

// 


// Brute Force Approach O(n2)
int maxProfit(vector <int> arr) {
    int maxProfit = 0;
    for(int i=0; i<arr.size(); i++) {
        for(int j=i+1; j<arr.size(); j++) {
            int profit = arr[j] - arr[i];
            
            if(profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

// Optimise O(n)
int optMaxProfit(vector <int> prices) {
    int bestBuy = prices[0];
    int maxProfit = 0;

    for(int i=1; i<prices.size(); i++) {
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

  




int main() {

    vector <int> arr = {7,1,5,3,6,4};

    cout << maxProfit(arr) << endl;

    cout << optMaxProfit(arr) << endl;
    
    return 0;
}