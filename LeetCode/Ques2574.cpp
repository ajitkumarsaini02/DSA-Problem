#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        vector<int>a(n,0);
        vector<int>b(n,0);
        for(int i=1;i<n;i++){
           
            left+=nums[i-1];
            a[i]=left;
        }
        for(int i=n-2;i>=0;i--){
           
            right+=nums[i+1];
            b[i]=right;
        }
        vector<int>sum(n,0);
        for(int i=0;i<n;i++){
            sum[i]=abs(a[i]-b[i]);
        }
        return sum;
    }
};