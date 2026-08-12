#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

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
