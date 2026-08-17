#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        double ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (i >= k)
                sum -= nums[i - k];

            if (i >= k - 1)
                ans = max(ans, sum / k);
        }

        return ans;
    }
};


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double maxSum = sum;
        for (int i = k; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - k];
            maxSum = max(sum, maxSum);
        }

        return maxSum / k;
    }
};
