#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int passwordStrength(string p) {
        string s = "";
        vector<int> vis(256, 0);
        for(auto& ch : p){
            if(!vis[ch]){
                s += ch;
                vis[ch] = 1;
            }
        }
        int st = 0;

        for(auto& ch : s){
            if(ch >= 'a' && ch <= 'z'){
                st += 1;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                st += 2;
            }
            else if(ch >= '0' && ch <= '9'){
                st += 3;
            }
            else{
                st += 5;
            }
        }

        return st;
    }
};
