#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        for(int i=0;i<word.size();i++){
            ans += i/8 + 1;
        }
        return ans;
    }
};


class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n <= 8) return n;
        else if(n <= 16 && n >= 8) return (n - 8) * 2 + 8;
        else if(n <= 24 && n >= 16) return (n - 16) * 3 + 24;
        else return (n - 24) * 4 + 48;
    }
};

