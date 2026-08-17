#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}


class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int l = 0;
        int ans = 0;
        unordered_map<char, int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            while(mp[s[i]] > 2){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, i - l + 1);
        }
        return ans;  
    }
};