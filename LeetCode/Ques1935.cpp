#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(),brokenLetters.end());

        int ans = 0;
        bool valid = true;

        for(int i=0;i<text.size();i++){
            if(text[i] == ' '){
                if(valid) ans++;
                valid = true;
            }
            else if(broken.count(text[i])){
                valid = false;
            }
        }

        if (valid) ans++;
        return ans;
    }
};

