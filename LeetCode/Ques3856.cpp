#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string trimTrailingVowels(string s) {
        vector<char> vowel = {'a','e','i','o','u'};
        
        while(!s.empty()) {
            char last = s.back();
            bool isVowel = false;
            
            for(char v : vowel) {
                if(last == v) {
                    isVowel = true;
                    break;
                }
            }
            
            if(isVowel) {
                s.pop_back();
            } else {
                break;
            }
        }
        
        return s;
    }
};