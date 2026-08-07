#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int frst = INT_MIN;
        int sec = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(frst < arr[i]){
                sec = frst;
                frst = arr[i];
            }
            if(arr[i] > sec && arr[i] != frst){
                sec = arr[i];
            }
        }
        return sec == INT_MIN ? -1 : sec;
    }
};

int main() {
    return 0;
}