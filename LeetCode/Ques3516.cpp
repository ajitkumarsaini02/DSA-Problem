#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a=abs(x-z);
        int b=abs(y-z);
        if(a>b) return 2;
        else if(a<b) return 1;
        else return 0;
    }
};