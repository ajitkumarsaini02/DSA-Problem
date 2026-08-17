#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& nums) {
        double ans = 0.0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for (int k=j+1;k<n;k++){
                    int x1 = nums[i][0], y1 = nums[i][1];
                    int x2 = nums[j][0], y2 = nums[j][1];
                    int x3 = nums[k][0], y3 = nums[k][1];

                    double area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) +  x3 * (y1 - y2)) / 2.0;
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
};