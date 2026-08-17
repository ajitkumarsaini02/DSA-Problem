#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        int week=0;
        for(int i=1;i<=n;i++){
            total+=week+(i-1)%7+1;
            if(i%7==0)  week++;
        }
        return total;
    }
};