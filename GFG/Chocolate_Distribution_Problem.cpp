#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        sort(a.begin(), a.end());
        int mn = INT_MAX;
        for(int i=0;i+m-1<n;i++){
            int d = a[i+m-1] - a[i];
            if(d<mn){
                mn = d;
            }
        }
        return mn;
    }
};
