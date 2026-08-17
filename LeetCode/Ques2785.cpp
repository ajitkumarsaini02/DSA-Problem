#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||        c=='I' || c=='O' || c=='U'){
                return true;
            }
            else{
                return false;
            }
    }
    string sortVowels(string s) {
        vector<char> str;
        int n = s.size();
        for(char c : s){
            if(isVowel(c)){
                str.push_back(c);
            }
        }
        int idx = 0;
        sort(str.begin(), str.end());
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i] = str[idx++];
            }
        }
        return s;
    }
};