#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxDigitRange(vector<int>& nums){
        int maxRange = -1;
        int sum = 0;

        for(int num : nums){
            int x = num;
            int mx = 0;
            int mn = 9;

            if(x == 0){
                mx = mn = 0;
            }

            while(x > 0){
                int d = x % 10;
                mx = max(mx, d);
                mn = min(mn, d);
                x /= 10;
            }

            int range = mx - mn;

            if(range > maxRange){
                maxRange = range;
                sum = num;
            }
            else if (range == maxRange){
                sum += num;
            }
        }

        return sum;
    }
};
