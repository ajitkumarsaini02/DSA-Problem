#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> status(n, vector<int>(m, 0));
        queue<pair<int,int>>Q;
        if(grid[0][0]==1 || grid[n-1][m-1]==1){
            return -1;
        }
        Q.push({0,0});
        status[0][0] = 1;
        grid[0][0] = 1;
        while(!Q.empty()){
            pair<int,int>p;
            p=Q.front();
            Q.pop();
            int i=p.first;
            int j=p.second;
            //right
            if(j+1<m){
                if(grid[i][j+1]==0){
                    status[i][j+1]=status[i][j]+1;
                    Q.push({i,j+1});
                    grid[i][j+1] = 1;
                }
            }
            //left 
            if(j-1>=0){
                if(grid[i][j-1]==0){
                    status[i][j-1]=status[i][j]+1;
                    Q.push({i,j-1});
                    grid[i][j-1] = 1;
                }
            }
            //up
            if(i-1>=0){
                if(grid[i-1][j]==0){
                    status[i-1][j]=status[i][j]+1;
                    Q.push({i-1,j});
                    grid[i-1][j] = 1;
                }
            }
            //down
            if(i+1<n){
                if(grid[i+1][j]==0){
                    status[i+1][j]=status[i][j]+1;
                    Q.push({i+1,j});
                    grid[i+1][j] = 1;
                }
            }
            if(i+1<n && j+1<m){
                if(grid[i+1][j+1]==0){
                    status[i+1][j+1] = status[i][j]+1;
                    Q.push({i+1,j+1});
                    grid[i+1][j+1] = 1;
                }
            }
            if(i-1>=0 && j-1>=0){
                if(grid[i-1][j-1]==0){
                    status[i-1][j-1] = status[i][j]+1;
                    Q.push({i-1,j-1});
                    grid[i-1][j-1] = 1;
                }
            }
            if(i-1>=0 && j+1<m){
                if(grid[i-1][j+1]==0){
                    status[i-1][j+1] = status[i][j]+1;
                    Q.push({i-1,j+1});
                    grid[i-1][j+1] = 1;
                }
            }
            if(i+1<n && j-1>=0){
                if(grid[i+1][j-1]==0){
                    status[i+1][j-1] = status[i][j]+1;
                    Q.push({i+1,j-1});
                    grid[i+1][j-1] = 1;
                }
            }
        }
        if(status[n-1][m-1] == 0)
            return -1;

        return status[n-1][m-1];
    }
};
