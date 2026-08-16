#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}



class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();

        int ans = -1;
        int minDis = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];

            int dis = abs(target[0] - x) + abs(target[1] - y);
            if (dis <= range) {
                if (dis < minDis) {
                    minDis = dis;
                    ans = i;
                }
            }
        }
        return ans;
    }
};