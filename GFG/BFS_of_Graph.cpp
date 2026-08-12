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
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        queue<int> q;
        vector<int> visited(n, 0);
        vector<int>ans;
        q.push(0);
        visited[0]=1;
        while(q.size()!=0){
            int x = q.front();
            ans.push_back(x);
            q.pop();
            for(int i=0;i<adj[x].size();i++){
                int y = adj[x][i];
                if(visited[y]==0){
                    visited[y]=1;
                    q.push(y);
                }
            }
        }
        return ans;
    }
};
