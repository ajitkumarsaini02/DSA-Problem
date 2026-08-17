#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int distinctIntegers(int n) {
        if(n == 1){
            return 1;
        }
        else {
            return n - 1;
        }
    }
};