#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> mp;
        int ans = 0;
        for(auto& word : words){
            string rev = word;
            reverse(rev.begin(), rev.end());
            if(mp.count(rev)){
                ans++;
                mp.erase(rev);
            }
            else{
                mp.insert(word);
            }
        }
        return ans;
    }
};