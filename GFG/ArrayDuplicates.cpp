#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int idx = abs(arr[i]) - 1;
            if(arr[idx] < 0){
                ans.push_back(abs(arr[i]));
            }
            else{
                arr[idx] = -arr[idx];
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}