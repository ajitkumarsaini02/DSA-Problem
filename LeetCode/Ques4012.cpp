#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int m = tasks.size();
        int n = shifts.size();

        vector<long long> prefix(m);
        prefix[0] = tasks[0];
        for (int i = 1; i < m; i++) {
            prefix[i] += prefix[i - 1] + tasks[i];
        }

        long long total = prefix[m - 1];
        long long done = 0;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            done += shifts[i];

            if (done >= total) {
                ans[i] = 0;
                done = 0;
            } else {
                int low = 0;
                int high = m - 1;
                int comp = m;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (prefix[mid] > done) {
                        comp = mid;
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                ans[i] = m - comp;
            }
        }
        return ans;
    }
};
