#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int digitSum(int n){
        int sum = 0;

        while(n > 0){
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }

    int squareSum(int n){
        int sum = 0;

        while(n > 0){
            int d = (n % 10);
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool checkGoodInteger(int n) {
        int good = squareSum(n) - digitSum(n);
        if(good >= 50){
            return true;
        }
        else{
            return false;
        }
    }
};
