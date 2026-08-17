#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        long long total = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                total += g[i][j];
            }
        }
        if(total % 2 == 1){
            return false;
        }
        long long half = total / 2;
        long long prefix = 0;
        for(int i=0;i<n-1;i++){
            long long s = 0;
            for(int j=0;j<m;j++){
                s += g[i][j];
            }
            prefix += s;
            if(prefix == half) return true;
        }

        prefix = 0;
        for(int j=0;j<m-1;j++){
            long long s = 0;
            for(int i=0;i<n;i++){
                s += g[i][j];
            }
            prefix += s;
            if(prefix == half) return true;
        }
    return false;
    }
};