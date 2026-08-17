#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}


class Solution {
public:
    int elevatorRequests(int n, vector<int>& req) {
        long long ans = 0;
        ans += req[0];
        for(int i=1;i<req.size();i++){
            ans += abs(req[i] - req[i-1]);
        }
        return ans;
    }
};