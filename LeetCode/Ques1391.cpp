#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        vector<pair<int,int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        vector<vector<int>> allowed = {
            {},                 // unused
            {0,1},              // right, left
            {2,3},              // down, up
            {1,2},              // left, down
            {0,2},              // right, down
            {1,3},              // left, up
            {0,3}               // right, up
        };

        vector<int> rev = {1,0,3,2};
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;

        q.push({0,0});
        vis[0][0] = 1;
        while(!q.empty()) {
            auto [x,y] = q.front();
            q.pop();

            if(x == n-1 && y == m-1) return true;

            int type = grid[x][y];

            for(int d : allowed[type]) {
                int nx = x + dirs[d].first;
                int ny = y + dirs[d].second;

                if(nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny])
                    continue;

                int nextType = grid[nx][ny];

                for(int back : allowed[nextType]) {
                    if(back == rev[d]) {
                        vis[nx][ny] = 1;
                        q.push({nx, ny});
                        break;
                    }
                }
            }
        }

        return false;
    }
};



class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>> q;

        q.push({0,0});
        vis[0][0] = 1;

        while(!q.empty()){
            auto p = q.front();
            q.pop();

            int i = p.first;
            int j = p.second;

            if(i == n-1 && j == m-1) return true;

            int cell = grid[i][j];

            // right
            if(j+1 < m && !vis[i][j+1]) {
                if((cell == 1 || cell == 4 || cell == 6) && 
                   (grid[i][j+1] == 1 || grid[i][j+1] == 3 || grid[i][j+1] == 5)) {
                    
                    vis[i][j+1] = 1;
                    q.push({i, j+1});
                }
            }

            // left
            if(j-1 >= 0 && !vis[i][j-1]) {
                if((cell == 1 || cell == 3 || cell == 5) && 
                   (grid[i][j-1] == 1 || grid[i][j-1] == 4 || grid[i][j-1] == 6)) {
                    
                    vis[i][j-1] = 1;
                    q.push({i, j-1});
                }
            }

            // up
            if(i-1 >= 0 && !vis[i-1][j]) {
                if((cell == 2 || cell == 5 || cell == 6) && 
                   (grid[i-1][j] == 2 || grid[i-1][j] == 3 || grid[i-1][j] == 4)) {
                    
                    vis[i-1][j] = 1;
                    q.push({i-1, j});
                }
            }

            // down
            if(i+1 < n && !vis[i+1][j]) {
                if((cell == 2 || cell == 3 || cell == 4) && 
                   (grid[i+1][j] == 2 || grid[i+1][j] == 5 || grid[i+1][j] == 6)) {
                    
                    vis[i+1][j] = 1;
                    q.push({i+1, j});
                }
            }
        }

        return false;
    }
};