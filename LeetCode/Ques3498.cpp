#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            int rev = 26 - (s[i]-'a');
            sum += (i+1)*rev;
        }
        return sum;
    }
};