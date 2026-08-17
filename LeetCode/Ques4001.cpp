#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& s1, vector<vector<int>>& s2) {
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int a = 0, b = 0;
        vector<vector<int>> ans;

        while (i >= 0 || j >= 0) {
            if (j < 0 || (i >= 0 && s1[i][0] > s2[j][0])) {
                a = s1[i][1];
                ans.push_back({s1[i][0], a + b});
                i--;
            } else if (i < 0 || (j >= 0 && s1[i][0] < s2[j][0])) {
                b = s2[j][1];
                ans.push_back({s2[j][0], a + b});
                j--;
            } else {
                a = s1[i][1];
                b = s2[j][1];
                ans.push_back({s2[j][0], a + b});
                i--;
                j--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
