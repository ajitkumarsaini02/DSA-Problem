#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}


class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = n-1;
        int ans = -1;
        while(i <= j){
            int mid = i + (j - i)/2;
            if(k < arr[mid]){
                j = mid - 1;
            }
            else if(k > arr[mid]){
                i = mid + 1;
            }
            else{
                ans = mid;
                j = mid - 1;
            }
        }
        return ans;
    }
};

