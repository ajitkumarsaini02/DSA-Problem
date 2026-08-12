#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


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
