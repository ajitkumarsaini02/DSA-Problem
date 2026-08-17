#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n > 0){
            int d = n % 10;
            n /= 10;
            rev = rev * 10 + d;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int minIdx = INT_MAX;
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                minIdx = min(minIdx, i - mp[nums[i]]);
            }
            mp[reverse(nums[i])] = i;
        }
        if(minIdx == INT_MAX){
            return -1;
        }
        else{
            return minIdx;
        }
    }
};