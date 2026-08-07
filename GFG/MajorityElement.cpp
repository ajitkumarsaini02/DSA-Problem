#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        int maxi = *max_element(arr.begin(), arr.end());
        
        vector<int> freq(maxi + 1, 0);
        
        for(int num : arr) {
            freq[num]++;
        }
        
        for(int i=0;i<=maxi;i++) {
            if(freq[i] > n/2) {
                return i;
            }
        }
        
        return -1;
    }
};

int main() {
    return 0;
}