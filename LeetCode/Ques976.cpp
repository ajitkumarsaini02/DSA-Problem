#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=n-1;i>=2;i--){
            if(nums[i] < nums[i-1] + nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];
            }
        }
        return 0;
    }
};



class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int peri = 0;
        int mx = 0;
        for(int i=2;i<n;i++){
            int f = nums[i-2];
            int s = nums[i-1];
            int t = nums[i];
            if(f + s > t){
                peri = f + s + t;
                mx = max(mx, peri);
            }
        }
        return mx;
    }
};