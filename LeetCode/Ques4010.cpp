#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();

        long long ans = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long gcd = std::gcd(1LL * nums[i], 1LL * nums[j]);
                long long gcdSquare = gcd * gcd;

                long long pairMul = 1LL * nums[i] * 1LL * nums[j];

                ans = max(ans, pairMul / gcdSquare);
            }
        }
        return ans;
    }
};
