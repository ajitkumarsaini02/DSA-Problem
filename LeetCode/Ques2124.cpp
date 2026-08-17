#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool checkString(string s) {
        for(int i=1;i<s.size();i++){
            if(s[i] == 'a' && s[i-1] == 'b'){
                return false;
            }
        }
        return true;
    }
};