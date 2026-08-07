#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==1) return 1;
        return 2*towerOfHanoi(n-1,from,aux,to)+1;
    }
};

int main() {
    return 0;
}