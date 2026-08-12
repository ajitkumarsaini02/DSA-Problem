#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 0;
        }
        vector<int> visited(n,-1);
        queue<int>q;
        q.push(0);
        visited[0]=0;
        while(q.size()!=0){
            int x = q.front();
            q.pop();
            for(int i=1;i<=nums[x];i++){
                int y = x+i;
                if(visited[y]==-1){
                    visited[y]=visited[x]+1;
                    q.push(y);
                }
                if(y==n-1) return visited[y];
            }
        }
        return -1;
    }
};