#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool checkOnesSegment(string s) {
        
        for(int i=1;i<s.size();i++){
            if(s[i] == '1' && s[i-1] == '0'){
                
                return false;
            }
        }
        return true;
    }
};