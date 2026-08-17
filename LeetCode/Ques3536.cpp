#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxProduct(int n) {
        int a = 0;
        int b = 0;

        while(n > 0){
            int d = n % 10;
            if(d >= a){
                b = a;
                a = d;
            }
            else if(d > b){
                b = d;
            }
            n /= 10;
        }
        return a * b;
    }
};
