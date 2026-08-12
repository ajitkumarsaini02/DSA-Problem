#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    int derangeCount(int n) {
        // code here
        if(n == 1) return 0;
        if(n == 2) return 1;
        int prev1 = 0, prev2 = 1;
        for(int i=3;i<=n;i++){
            int curr = (i - 1) * (prev1 + prev2);
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};