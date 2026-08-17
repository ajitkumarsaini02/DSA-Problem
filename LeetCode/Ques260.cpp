#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n == 2) return nums;

        vector<int> ans;
        unordered_map<int, int> mp;

        for(int x : nums){
            mp[x]++;
        }

        for(auto& x : mp){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};