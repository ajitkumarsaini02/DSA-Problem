#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                ans[i] = nums[i / 2];
            } else {
                ans[i] = nums[i / 2 + n];
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        vector<int> v;
        int i=0,j=n;
        while(i<j && j<m){
            v.push_back(nums[i]);
            i++;
            v.push_back(nums[j]);
            j++;
        }
        return v;
    }
};
