#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool digitProduct(int n, int t) {
        int prod = 1;
        while (n > 0) {
            prod *= (n % 10);
            n /= 10;
        }
        return prod % t == 0;
    }

    int smallestNumber(int n, int t) {
        if(digitProduct(n, t)) return n;
        for (int i = n + 1; i < n + 11; i++) {
            if(digitProduct(i, t)){
                return i;
            }
        }
        return n;
    }
};
