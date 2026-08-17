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
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;

        for (int x : arr) {
            x = ((x % k) + k) % k;
            mp[x]++;
        }
        if (mp.find(0) != mp.end()) {
            if (mp[0] % 2 != 0)
                return false;
            mp.erase(0);
        }

        for (auto x : mp) {
            int num = x.first;
            int rem = k - num;
            if (mp.find(rem) == mp.end())
                return false;
            if (mp[num] != mp[rem])
                return false;
        }
        return true;
    }
};
