#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        int n = s.size();
        unordered_map<char, int> mp;
        for(char c : s){
            mp[c]++;
        }
        int ones = 0;
        for(auto it : mp){
            if((it.second) % 2 != 0){
                ones++;
            }
            
        }
        if(n % 2 == 0){
            return ones == 0;
        }
        else{
            return ones == 1;
        }
    }
};

int main() {
    return 0;
}