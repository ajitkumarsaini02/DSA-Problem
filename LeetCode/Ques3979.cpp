#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefix(n);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = max(prefix[i-1], 1LL *nums[i]);
        }

        long long ans = LLONG_MIN;

        for(int i=k;i<n;i++){
            ans = max(ans, prefix[i-k] + 1LL * nums[i]);
        }

        return (int)ans;
    }
};


class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = max(prefix[i-1], nums[i]);
        }

        int ans = INT_MIN;

        for(int i=k;i<n;i++){
            ans = max(ans, prefix[i-k] + nums[i]);
        }

        return ans;
    }
};