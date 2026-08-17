#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int ans = 0;
        int n = q.size();
        const long long MOD = 1000000007;
        for(int i=0;i<n;i++){
            int idx = q[i][0];
            while(idx <= q[i][1]){
                nums[idx] = (nums[idx] * 1LL * q[i][3]) % MOD;
                idx += q[i][2];
            }
        }
        for(int x : nums){
            ans ^= x;
        }
        return ans;
    }
};


//other
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int ans = 0;
        int n = q.size();
        for(int i=0;i<n;i++){
            int idx = q[i][0];
            while(idx <= q[i][1]){
                nums[idx] = (nums[idx] * 1LL * q[i][3]) % 1000000007;
                idx += q[i][2];
            }
        }
        for(auto x : nums){
            ans ^= x;
        }
        return ans;
    }
};