#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int mx =arr[n-1];
        ans.push_back(mx);
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i] >= mx){
                ans.push_back(arr[i]);
                mx = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
