#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    return 0;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(250, 0);
        int n = s.size();
        int l = 0, start = 0, maxLen = 0;
        for(int i=0;i<s.size();i++){
            while(freq[s[i]] > 0){
                freq[s[l]]--;
                l++;
            }
            freq[s[i]]++;

            if(i - l + 1 > maxLen){
                maxLen = i - l + 1;
                start = l;
            }
        }
        return maxLen;
    }
};