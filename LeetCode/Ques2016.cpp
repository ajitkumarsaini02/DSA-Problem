#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minVal = nums[0];
        int maxDiff = -1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > minVal) {
                int diff = nums[i] - minVal;
                if(diff > maxDiff) maxDiff = diff;
            }
            if(nums[i] < minVal) minVal = nums[i];
        }
        return maxDiff;
    }
};