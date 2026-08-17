#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}


class Solution {
public:
    int minPenalty(int period, vector<int>& light, vector<int>& arrivalTime) {

        int n = light.size();
        int m = arrivalTime.size();
        int ans = 0;
        int maxLight = *max_element(light.begin(), light.end());
        for (int j = 0; j < m; j++) {

            int r = arrivalTime[j] % period;
            int wait;

            if (r < maxLight) {
                wait = 0;
            } else {
                wait = period - r;
            }

            ans = max(ans, wait);
        }
        return ans;
    }
};