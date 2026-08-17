#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
        while (n != 0) {
            int r = n % 2;
            n /= 2;
            s+=(r+'0');
        }
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                return false;
            }
        }
        return true;
    }
};