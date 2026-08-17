#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isObstacle(int x, int y, vector<vector<int>>& obstacles) {
        int left = 0, right = obstacles.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (obstacles[mid][0] == x && obstacles[mid][1] == y)
                return true;
            if (obstacles[mid][0] < x || 
               (obstacles[mid][0] == x && obstacles[mid][1] < y))
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        sort(obstacles.begin(), obstacles.end());
        int x = 0, y = 0;
        vector<int> dx = {0, 1, 0, -1};
        vector<int> dy = {1, 0, -1, 0};
        int dir = 0, maxDist = 0;

        for(int c : commands){
            if(c == -1){
                dir = (dir + 1) % 4;
            }
            else if(c == -2){
                dir = (dir + 3) % 4;
            }
            else{
                for(int i=0;i<c;i++){
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];
                    if(isObstacle(nx, ny, obstacles)) break;

                    x = nx;
                    y = ny;
                    maxDist = max(maxDist, x*x + y*y);
                }
            }
        }
        return maxDist;
    }
};