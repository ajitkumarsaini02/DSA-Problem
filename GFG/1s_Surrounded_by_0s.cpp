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
    int cntOnes(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        queue<pair<int,int>> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i == 0 || i == n-1 || j == 0 || j == m-1) && grid[i][j] == 1){
                    visited[i][j] = true;
                    q.push({i, j});
                }
            }
        }
        
        int dirs[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();
            for(auto& d : dirs){
                int nr = r + d[0];
                int nc = c + d[1];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc] && grid[nr][nc] == 1){
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
        
        int count = 0;
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    count++;
                }
            }
        }
        
        return count;
    }
};