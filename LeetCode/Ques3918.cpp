#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int reverseNumber(int n){
        int rev = 0;
        while(n > 0){
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }

    bool primeNumber(int n){
        if(n == 1) return false;
        if(n == 2) return true;
        for(int i=2;i*i<=n;i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        int r = reverseNumber(n);
        int ans = 0;

        for(int i=min(r, n);i<=max(n, r);i++){
            if(primeNumber(i)){
                ans += i;
            }
        }
        return ans;
    }
};
