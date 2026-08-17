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
    int numberOfSubstrings(string s) {
        unordered_map<char, int> mp;

        int n = s.length();
        int count = 0;
        int j = 0;

        for(int i=0;i<n;i++){
            mp[s[i]]++;

            while(mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0){
                count += n - i;
                mp[s[j]]--;
                j++;
            }
        }
        return count;
    }
};
