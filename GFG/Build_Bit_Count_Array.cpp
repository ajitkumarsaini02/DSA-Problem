#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    int count(int n){
        int ones = 0;
        while(n > 0){
            if(n % 2 == 1) ones++;
            n /= 2;
        }
        return ones;
    }
    vector<int> countBits(int n) {
        // code here
        vector<int> ans(n+1);
        for(int i=1;i<=n;i++){
            ans[i] = count(i);
        }
        return ans;
    }
};