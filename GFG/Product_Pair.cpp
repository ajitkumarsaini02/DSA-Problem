#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        unordered_set<long long> seen;

        for (int num : arr) {
            long long x = (long long)num;

            if (target == 0) {

                if (x == 0 && !seen.empty()) return true;
                if (x != 0 && seen.count(0)) return true;
            } else {

                if (x != 0 && target % x == 0) {
                    long long complement = target / x;
                    if (seen.count(complement)) return true;
                }
            }

            seen.insert(x);
        }

        return false;
    }
};