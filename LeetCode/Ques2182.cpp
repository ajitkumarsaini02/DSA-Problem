#include<bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}


class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        priority_queue<pair<char, int>> pq;
        for (auto x : mp) {
            pq.push(x);
        }

        string result = "";
        while (!pq.empty()) {
            auto large = pq.top();
            pq.pop();
            int len = min(large.second, repeatLimit);
            for (int i = 0; i < len; i++) {
                result += large.first;
            }

            pair<char, int> secondLarge;
            if (large.second - len > 0) {
                if (!pq.empty()) {
                    secondLarge = pq.top();
                    pq.pop();
                    result += secondLarge.first;
                }
                else{
                    return result;
                }
                if(secondLarge.second - 1 > 0){
                    pq.push({secondLarge.first, secondLarge.second - 1});
                }
                pq.push({large.first, large.second - len});
            }
        }
        return result;
    }
};