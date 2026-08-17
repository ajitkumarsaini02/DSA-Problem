#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int smallestNumber(int n) {
        int bitLength = 0;
        int temp = n;
        while (temp > 0) {
            bitLength++;
            temp = temp >> 1;  
        }
        int ans=pow(2,bitLength)-1;
        return ans;
    }
};