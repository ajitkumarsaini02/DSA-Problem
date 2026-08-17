#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[i+n] = nums[n-i-1];
            ans[i] = nums[i];
        }
        return ans;
    }
};

