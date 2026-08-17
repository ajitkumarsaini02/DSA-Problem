#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == s[n-i-1]){
                return i;
            }
        }
        return -1;
    }
};