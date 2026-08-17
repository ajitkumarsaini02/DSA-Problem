#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {    
        for (int i=0;i<nums.size();i++){
            nums[i] *= nums[i];
            }

            sort(nums.begin(), nums.end());
            return nums;
        
    }
};