#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return 1;
        }
        sort(nums.begin(), nums.end());
        int curr = 1;
        int maxLen = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) continue;
            else if(nums[i] == nums[i-1] +1){
                curr++;
            }
            else{
                curr = 1;
            }
            maxLen = max(maxLen, curr);
        }
        return maxLen;
    }
};