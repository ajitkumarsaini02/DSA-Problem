#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int curr = arr[0];
        int sum = arr[0];
        for(int i=1;i<arr.size();i++){
            curr = max(arr[i], curr + arr[i]);
            sum = max(curr, sum);
        }
        return sum;
    }
};

int main() {
    return 0;
}