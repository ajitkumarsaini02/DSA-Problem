#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0;
        for(int i=0;i<n;i++){
            if(nums[i] < pivot){
                ans[l++] = nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] == pivot){
                ans[l++] = nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] > pivot){
                ans[l++] = nums[i];
            }
        }
        return ans;
    }
};