#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxFreqSum(string s) {
        int cntVl = 0;
        int cntCn = 0;
        vector<int> freq(26,0);
        for(char x : s){
            freq[x-'a']++;
        }
        int mxvowel = 0;
        int mxcons = 0;
        for(int i=0;i<26;i++){
            int ch = i+'a';
            bool isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

            if(isVowel){
                mxvowel = max(freq[i], mxvowel);
            }
            else{
                mxcons = max(freq[i], mxcons);
            }
        }
        return mxvowel + mxcons;
    }
};