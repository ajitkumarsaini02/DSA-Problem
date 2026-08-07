#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adjlist) {
        int n = adjlist.size();
        vector<int> visited(n, 0);
        vector<int> ans;
        stack<int> s;
        s.push(0);
        
        while(!s.empty()){
            int top = s.top();
            s.pop();
            if(visited[top]) continue;
            visited[top] = 1;
            ans.push_back(top);
            for(int i = adjlist[top].size() - 1; i >= 0; i--){
                int y = adjlist[top][i];
                if(!visited[y]){
                    s.push(y);
                }
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}