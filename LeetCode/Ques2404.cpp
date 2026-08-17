#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int x : nums){
            if(x % 2 == 0) mp[x]++;
        }

        if(mp.empty()) return -1;
        int ans = INT_MIN;
        int freqMax = 0;

        for(auto & x : mp){
            if(x.second > freqMax){
                freqMax = x.second;
                ans = x.first;
            }
            else if(freqMax == x.second){
                ans = min(ans, x.first);
            }
        }
        return ans;
    }
};