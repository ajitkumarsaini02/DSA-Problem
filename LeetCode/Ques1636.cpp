#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    typedef pair<int, int> pi;
    struct cmp {
        bool operator()(pair<int, int>& a, pair<int, int>& b) {
            if (a.first == b.first)
                return a.second < b.second;

            return a.first > b.first;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        priority_queue<pi, vector<pi>, cmp> q;
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        for (auto x : mp) {
            q.push({x.second, x.first});
        }
        int i = 0;
        while (!q.empty()) {
            int freq = q.top().first;
            int val = q.top().second;
            while (freq > 0) {
                nums[i++] = val;
                freq--;
            }
            q.pop();
        }

        return nums;
    }
};
