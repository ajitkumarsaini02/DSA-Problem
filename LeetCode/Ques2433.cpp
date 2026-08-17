#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> arr(n);
        arr[0] = pref[0];
        for(int i=1;i<n;i++){
            arr[i] = pref[i-1] ^ pref[i];
        }
        return arr;
    }
};