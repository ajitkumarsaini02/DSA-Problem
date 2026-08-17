#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int a = (start[1] + start[0]) % 2;
        int b = (target[1] + target[0]) % 2;
        return a == b;
    }
};
