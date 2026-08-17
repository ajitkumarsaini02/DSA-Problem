#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        if(costs[0] > coins) return 0;
        
        int count = 0;
        int price = 0;
        for(int i=0;i<costs.size();i++){
            count++;
            price += costs[i];
            if(price > coins){
                count--;
                break;
            }
        }
        return count;
    }
};
