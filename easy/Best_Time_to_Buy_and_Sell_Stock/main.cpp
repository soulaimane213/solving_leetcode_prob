#include <vector>
#include <iostream>

using namespace std;


int maxProfit(vector<int>& prices) {

    int curr =-999999;
    int max_profit =0;
    int temp =0;

    if(prices.size() > 1){
        curr = prices[0];
    }else{
        return max_profit;
    }
    
    for (int i =0; i < prices.size() ; i++){

        if(prices[i] < curr){
            curr = prices[i];
        }

        temp = prices[i] - curr;
        if(temp > max_profit){
            max_profit = temp;
        }
    }

    return max_profit;


}

