#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int res = 0;
        int mx = 0;
        for(int i=0;i<nums.size();i++){
            mx = max(mx, nums[i]);
        }
        vector<int>ans(mx+1,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        vector<int>freq(nums.size()+1,0);
        for(int i=0;i<=mx;i++){
            if(ans[i] > 0){
                freq[ans[i]]++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(freq[ans[nums[i]]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};