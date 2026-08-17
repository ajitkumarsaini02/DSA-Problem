#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char ch = 'a';
        for(char c : key){
            if(c != ' ' && mp.find(c) == mp.end()){
                mp[c] = ch;
                ch++;
            }
        }
        string res = "";
        for(char c : message){
            if(c == ' '){
                res += ' ';
            }
            else{
                res += mp[c];
            }
        }
        return res;
    }
};