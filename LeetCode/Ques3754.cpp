#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);

        long long x = 0;
        long long sum = 0;

        for(char c : s){
            if(c != '0'){
                int d = c - '0';
                sum += d;
                x = x * 10 + d;
            }
        }

        return x * sum;
    }
};



class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev = 0;

        while(n > 0){
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        long long x = 0, sum = 0;

        while(rev > 0){
            int d = rev % 10;
            if(d != 0){
                sum += d;
                x = x * 10 + d;
            }
            rev /= 10;
        }

        return x * sum;
    }
};