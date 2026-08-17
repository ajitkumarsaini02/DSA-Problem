#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans = 0;
        for(int x=max(1, n-k);x<=n+k;x++){
            if((n & x) == 0){
                ans += x;
            }
        }
        return ans;
    }
};
