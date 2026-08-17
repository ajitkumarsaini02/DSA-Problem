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
static bool cmp(vector<int> p, vector<int> q){
    double d1= sqrt(p[0]*p[0]+p[1]*p[1]);
    double d2= sqrt(q[0]*q[0]+q[1]*q[1]);
    if(d1<d2)
     return true;
    else
     return false; 
}
vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    sort(points.begin(), points.end(), cmp); 

    vector<vector<int>> ans;
    for(int i=0;i<k; i++){
        ans.push_back(points[i]);
    }   
    return ans;
    }
};



class Solution {
public:
    typedef pair<int, vector<int>> pi;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pi> q;
        vector<vector<int>> ans;
        for (auto v : points) {
            int x = v[0];
            int y = v[1];
            int dist = x * x + y * y;
            q.push({dist, v});
            if(q.size() > k){
                q.pop();
            }
        }
        while (!q.empty()) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
