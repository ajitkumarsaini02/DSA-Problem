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
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.rbegin(), p.rend());

        int n = p.size();
        int m = d.size();
        priority_queue<int> pq;
        for (auto x : d) {
            pq.push(x);
        }
        double ans = 0;
        for (int i = 0; i < n; i++) {
            if (!pq.empty()) {
                double disct = pq.top();
                pq.pop();
                double prices = 1.0 * p[i] * (100 - disct) / 100;
                ans += prices;
            } else {
                ans += p[i];
            }
        }
        return ans;
    }
};