#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int count=0;
        vector<int> freq(26,0);
        for(char c : allowed){
            freq[c-'a']++;
        }
        for(string w : words){
            bool allow = true;
            for (char c : w){
                if(freq[c-'a'] == 0){
                    allow = false;
                    break;
                }
            }
            if(allow) count++;
        }
        return count;
    }
};