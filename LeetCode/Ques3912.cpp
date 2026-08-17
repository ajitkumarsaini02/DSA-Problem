#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();

        vector<bool> valid(n, false);

        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i] > mx){
                valid[i] = true;
                mx = nums[i];
            }
        }

        mx = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i] > mx){
                valid[i] = true;
                mx = nums[i];
            }
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            if(valid[i]) ans.push_back(nums[i]);
        }

        return ans;
    }
};