#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}


class Solution {
public:
    typedef pair<long long, pair<int, int>> pip;

    struct cmp {
        bool operator()(const pip& a, const pip& b) const {
            return a.first > b.first;
        }
    };

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
        vector<vector<int>> ans;
        int n = nums1.size();
        int m = nums2.size();
        priority_queue<pip, vector<pip>, cmp> pq;

        for (int i = 0; i < min(k, n); i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }
        while (k-- && !pq.empty()) {
            auto top = pq.top();
            pq.pop();
            int i = top.second.first;
            int j = top.second.second;
            ans.push_back({nums1[i], nums2[j]});

            if (j + 1 < m) {
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }
        }
        return ans;
    }
};