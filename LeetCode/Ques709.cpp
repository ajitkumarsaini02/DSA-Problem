#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";

        for(int i=0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                ans += (s[i] + 32);
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};




class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            if (isalpha(s[i]))
               ans += tolower(s[i]);
            else {
                ans +=s[i];
               }
        }
        return ans;
    }
};

