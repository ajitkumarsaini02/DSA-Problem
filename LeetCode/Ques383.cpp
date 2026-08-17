#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int> freq(26,0);
        for(char c : m){
            freq[c-'a']++;
        }
        for(char c : r){
            freq[c-'a']--;
            if(freq[c-'a'] < 0){
                return false;
            }
        }

        return true;
    }
};