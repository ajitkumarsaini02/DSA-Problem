#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int rev(int n) {
        int r = 0;
        while (n > 0) {
            int d = n % 10;
            r = 10 * r + d;
            n /= 10;
        }
        return r;
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int const MOD = 1e9 + 7;
        for (int i = 0; i < n; i++) {
            nums[i] -= rev(nums[i]);
        }

        int count = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                count %= MOD;
                count += mp[nums[i]];
            }
            mp[nums[i]]++;
        }
        return count % MOD;
    }
};
