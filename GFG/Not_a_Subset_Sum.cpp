#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    int findSmallest(vector<int> &arr) {
        // code here.
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(auto& x : arr){
            if(x <= ans+1){
                ans += x;
            }
            else{
                return ans + 1;
            }
        }
        return ans + 1;
    }
};