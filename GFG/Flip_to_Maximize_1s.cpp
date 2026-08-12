#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    int maxOnes(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ones = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1) ones++;
        }
        int maxSum = 0;
        int curr = 0;
        for(int i=0;i<n;i++){
            int val = (arr[i] == 0) ? 1 : -1;
            curr = max(val, curr+val);
            maxSum = max(maxSum, curr);
        }
        return ones + maxSum;
    }
};