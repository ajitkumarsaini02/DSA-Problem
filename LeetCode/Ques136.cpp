#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(int val : nums){
            ans=ans ^ val;
        }
        return ans;
    }

};