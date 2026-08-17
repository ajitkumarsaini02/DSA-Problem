#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    long long weightedSum(vector<int>& p, vector<int>& nums) {
        int n = p.size();
        vector<vector<int>> tree(n);
        for (int i = 1; i < n; i++) {
            tree[p[i]].push_back(i);
        }
        queue<int> q;
        vector<int> depth(n);
        q.push(0);
        depth[0] = 1;
        int height = 1;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            height = max(height, depth[node]);
            for (auto x : tree[node]) {
                depth[x] = depth[node] + 1;
                q.push(x);
            }
        }

        long long ans = 0;
        for (int i=0; i < nums.size(); i++) {
            ans += 1LL * nums[i] * (height - depth[i] + 1);
        }
        return ans;
    }
};
