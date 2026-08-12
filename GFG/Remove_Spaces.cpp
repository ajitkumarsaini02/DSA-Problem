#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int idx = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                s[idx] = s[i];
                idx++;
            }
        }
        s.resize(idx);
        return s;
    }
};
