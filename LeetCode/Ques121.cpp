#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=0;
        int n=prices.size();
        int a=prices[0];
        for (int i = 1; i < n; i++) {
            if (prices[i] < a) {
                a = prices[i];
                buy = i;
            }
            else if((prices[i]-a)>sell){
                sell=prices[i]-a;
            }    
        }
        
        return sell;

    }
};