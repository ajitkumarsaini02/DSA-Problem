#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            string s = to_string(nums[i]);
            for(char ch : s){
                ans.push_back(ch - '0');
            }
        }
        return ans;
    }
};