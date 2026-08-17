#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string r="";
            for(int i=0;i<s.length()-1;i++){
                int sum=(s[i]-'0')+(s[i+1]-'0');
                r+=(sum%10)+'0';
            }
            s=r;
        }
        return s[0]==s[1];
    }
};