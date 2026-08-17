#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> st;
        for(char ch : s){
            if(islower(ch)){
                st.insert(ch);
            }
        }
        string ans = " ";
        for(char ch : s){
            if(isupper(ch)){
                if(ch > ans[0] && st.count(tolower(ch))){
                    ans[0] = ch;
                }
            }
        }
        if(ans == " ") return ""; 
        else return ans;
    }
};