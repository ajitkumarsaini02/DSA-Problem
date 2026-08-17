#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i+1;j<n;j++){
                if(nums[i] % 2 == 0){
                    if(nums[j] % 2 == 1){
                        count++;
                    }
                }
                else{
                    if(nums[j] % 2 == 0){
                        count++;
                    }
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};
