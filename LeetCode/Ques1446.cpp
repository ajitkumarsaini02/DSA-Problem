#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int count=0;
        int mx=0;
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]) count++;
            else count=0;
            mx=max(mx,count);
        }
        return mx+1;
    }
};