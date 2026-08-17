#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int countValidPrefixes(string s) {
        int ans = 0;
        int count0 = 0, count1 = 0;

        for(char ch : s){
            if(ch == '0') count0++;
            else count1++;

            if(abs(count1 - count0) <= 1) ans++;
        }
        return ans;
    }
};
