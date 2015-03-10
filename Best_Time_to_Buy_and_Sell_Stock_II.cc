#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices) {
    int start, money, len;
    money = 0;
    if (prices.empty()) {
        return money;
    }
    start = prices[0];
    len = prices.size();

    for (int i = 1; i < len; i++) {
        if (prices[i] < prices[i-1]) {
            money += (prices[i-1] - start);
            start = prices[i];
            cout << "start is " << start << endl;
        }   
    }
    if (prices[len-1] > start) {
        money += (prices[len-1]-start);
    }
    return money;
}

int main()
{
    int money;
    vector<int> prices;
    prices.push_back(5);
    prices.push_back(1);
    prices.push_back(3);
    prices.push_back(2);
    prices.push_back(9);
    money = maxProfit(prices);

    cout << "money is " << money << endl;
    return 0;

}
