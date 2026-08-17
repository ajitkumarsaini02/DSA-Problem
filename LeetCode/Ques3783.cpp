#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int mirrorDistance(int n) {
        int a = n;
        int rev = 0;
        while(a>0){
            int d = a%10;
            rev = rev*10 +d;
            a/=10;
            
        }
        return abs(n-rev);
    }
};

//other

class Solution {
public:
    int reverse(int n){
        int rev = 0;
        while(n > 0){
            int d = n % 10;
            n /= 10;
            rev = rev * 10 + d;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        int rev = reverse(n);
        return abs(rev - n);
    }
};