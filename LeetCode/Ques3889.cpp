#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int mirrorFrequency(string s) {
        int sum = 0;
        vector<int> mirror(128);
        for(char c = 'a'; c <= 'z'; c++) {
            mirror[c] = 'z' - (c - 'a');
        }
        for(char c = '0'; c <= '9'; c++) {
            mirror[c] = '9' - (c - '0');
        }
        vector<int> freq(128, 0);
        for(char c : s){
            freq[c]++;
        }
        for(char c = 'a'; c <= 'z'; c++){
            char m = mirror[c];
            if(c <= m){
                sum += abs(freq[c] - freq[m]);
            }
        }
        for(char c = '0'; c <= '9'; c++) {
            char m = mirror[c];
            if(c <= m) {
                sum += abs(freq[c] - freq[m]);
            }
        }
        return sum;
    }
};