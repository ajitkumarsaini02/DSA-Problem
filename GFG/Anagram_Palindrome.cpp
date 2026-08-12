#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    return 0;
}

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