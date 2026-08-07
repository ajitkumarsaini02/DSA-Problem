#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        // code here
        int ans = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == ans){
                ans++;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}