#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int t) {
        // code here
        int curr = 0;
        int idx = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            curr += arr[i];
            while(curr > t && idx <= i){
                curr -= arr[idx];
                idx++;
            }
            if(curr == t){ 
                return {idx + 1, i + 1};
            }
        }
        return {-1};
    }
};

int main() {
    return 0;
}