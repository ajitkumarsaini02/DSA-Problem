#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == 1 && nums[j]== 2 || nums[i] == 2 && nums[j]== 1){
                    mn = min(mn, abs(i-j));
                }
            }
        }
        return mn == INT_MAX ? -1 : mn;
    }
};