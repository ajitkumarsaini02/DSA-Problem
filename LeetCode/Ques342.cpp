#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        while(n > 0){
            if(n % 4 != 0 && n != 1) return false;
            n /= 4;
        }
        return true;
    }
};