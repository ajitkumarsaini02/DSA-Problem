#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int MOD = 1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        long long s = 0, mod = 1000000007;
        for(int a : nums) s += a;
        long long x = (s + k - 1) / k % mod;
        int ans = (x - 1) * x / 2 % mod;
        
        return ans;
    }
};


class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long n=0;
        long long r=k;
        for(int x : nums){
            if(x>r){
                long long cnt = (x - r + k - 1) / k;
                n += cnt;
                r += cnt * 1LL * k;
            } 
            r -= x;
        }
        const int MOD=1e9+7;
        n = n % MOD;
        long long sum= ((n*(1+n))/2)%MOD;
        return sum;
    }
};