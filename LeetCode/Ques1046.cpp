#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;

        for (int x : stones) {
            q.push(x);
        }

        while (q.size() > 1) {
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            int diff = x - y;
            if (x != y)
                q.push(diff);
        }
        if(q.empty()) return 0;
        return q.top();
    }
};
