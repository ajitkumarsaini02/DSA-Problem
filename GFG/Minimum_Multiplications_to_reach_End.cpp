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
    int minSteps(vector<int>& arr, int start, int end) {
        if (start == end) return 0;
        
        vector<int> dist(1000, -1);
        queue<int> q;
        
        dist[start] = 0;
        q.push(start);
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            for(int multiplier : arr){
                int next = (curr * multiplier) % 1000;

                if(dist[next] == -1){
                    dist[next] = dist[curr] + 1;
                    
                    if(next == end) return dist[next];
                    
                    q.push(next);
                }
            }
        }
        return -1;
    }
};