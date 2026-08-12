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
    typedef pair<int, vector<int>> pi;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // code here
        priority_queue<pi> q;
        vector<vector<int>> ans;
        for (auto v : points) {
            int x = v[0];
            int y = v[1];
            int dist = x * x + y * y;
            q.push({dist, v});
            if(q.size() > k){
                q.pop();
            }
        }
        while (!q.empty()) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};