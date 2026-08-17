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
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        if(n == 0){
            freq[0]++;
        }
        while(n > 0){
            freq[n % 10]++;
            n /= 10;
        }
        int ans = 0;
        for(auto &it : freq){
            ans += it.first * it.second;
        }
        return ans;
    }
};
