#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string URLify(string &s) {
        // code here
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                s.replace(i, 1, "%20");
                i += 2;
            }
        }
        return s;
    }
};

int main() {
    return 0;
}