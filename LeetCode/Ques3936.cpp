#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero = 0;
        for(int x : nums){
            if(x == 0) zero++;
        }

        int n = nums.size();
        int count = 0;

        for(int i=n-zero;i<n;i++){
            if(nums[i] != 0){
                count++;
            }
        }
        return count;
    }
};

