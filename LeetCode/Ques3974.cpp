#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long total = 0;
        sort(nums.rbegin(), nums.rend());

        for(int i=0;i<k;i++){
            if(mul > 0){
                total += max(1LL * nums[i], 1LL * nums[i] * mul);
            }
            else{
                total += nums[i];
            }
            mul--;
        }
        return total;
    }
};
