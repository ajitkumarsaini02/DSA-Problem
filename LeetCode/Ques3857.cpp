#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minCost(int n) {
        return 1LL * n * (n - 1) / 2;
    }
};