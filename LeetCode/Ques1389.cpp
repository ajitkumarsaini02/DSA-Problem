#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.insert(ans.begin()+index[i], nums[i]); 
        }
        return ans;
    }
};