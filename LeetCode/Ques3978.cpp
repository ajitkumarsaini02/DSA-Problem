#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        vector<int> freq(101, 0);
        for(int x : nums){
            freq[x]++;
        }
        
        return freq[nums[nums.size()/2]] == 1;
    }
};