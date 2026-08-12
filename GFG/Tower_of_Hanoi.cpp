#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==1) return 1;
        return 2*towerOfHanoi(n-1,from,aux,to)+1;
    }
};
