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
    int minimumPushes(string word) {
        unordered_map<char, int> mp;

        for (char ch : word) {
            mp[ch]++;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(),
             [](auto& a, auto& b) { return a.second > b.second; });

        int size = v.size();

        int ans = 0;
        for (int i = 0; i < size; i++) {
            if (i < 8)
                ans += v[i].second;
            else if (i < 16 && i >= 8)
                ans += v[i].second * 2;
            else if (i < 24 && i >= 16)
               ans += v[i].second * 3;
            else
                ans += v[i].second * 4;
        }
        return ans;
    }
};



class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for (char ch : word) {
            freq[ch - 'a']++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += freq[i] * (i / 8 +1);
        }
        return ans;
    }
};



class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp;

        for (char ch : word) {
            mp[ch]++;
        }

        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b) { 
            return a.second > b.second;
        });

        int size = v.size();

        int ans = 0;
        for (int i = 0; i < size; i++) {
            ans += v[i].second * (i / 8 +1);
        }
        return ans;
    }
};