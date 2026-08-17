#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(nums[n-1] != n-1){
            return false;
        }

        for(int i=1;i<n-1;i++){
            if(nums[i-1] == nums[i]){
                return false;
            }
        }

        if(nums[n-2] != nums[n-1]){
            return false;
        }
        return true;
    }
};


class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        if(mx != n-1){
            return false;
        }
        unordered_map<int, int> mp;

        for(int a : nums){
            mp[a]++;
        }
        for(int i=1;i<mx;i++){
            if(mp[i] != 1){
                return false;
            }
        }
        if(mp[mx] != 2){
            return false;
        }
        return true;
    }
};