#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int digitSum(int a) {
        int s = 0;
        while(a > 0){
            s += a % 10;
            a /= 10;
        }
        return s;
    }

    int largestInteger(int n, int s) {
        if(s == 0) return 0;
        int x = pow(10, n) -1;
        for(int i=x; i>=n ;i--){
            if(digitSum(i) == s){
                return i;
            }
        }
        return -1;
    }
};

