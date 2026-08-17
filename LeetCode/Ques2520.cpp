#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int countDigits(int num) {
        int t=num;
        int count=0;
        while(t>0){
            int d=t%10;
            if(num%d==0) count++;
            t/=10;
        }
        return count;
    }
};
