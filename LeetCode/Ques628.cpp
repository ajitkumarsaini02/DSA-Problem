#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    return 0;
}

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long ans=max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
        return ans;
    }
};



class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN;
        int b = INT_MIN;
        int c = INT_MIN;
        int m = INT_MAX;
        int n = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (a <= nums[i]) {
                c = b;
                b = a;
                a = nums[i];
            } else if (b < nums[i]) {
                c = b;
                b = nums[i];
            } else if(c < nums[i]){
                c = nums[i];
            }

            if(nums[i] <= m){
                n = m;
                m = nums[i];
            }
            else if(nums[i] < n){
                n = nums[i];
            }
        }
        return max(a * b * c, a * m * n);
    }
};
