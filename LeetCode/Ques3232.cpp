#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total = 0;
        int singleSum = 0;
        int doubleSum = 0;

        for(int num : nums){
            total += num;

            if(num >= 1 && num <= 9){
                singleSum += num;
            }
            else if (num >= 10 && num <= 99){
                doubleSum += num;
            }
        }

        return (singleSum > total - singleSum) || (doubleSum > total - doubleSum);
    }
};
