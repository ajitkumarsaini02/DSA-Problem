#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n <= 1) return 0;
        if(arr[0] == 0) return -1;
        int curr = 0;
        int jump = 0;
        int next = 0;
        for(int i=0;i<n-1;i++){
            
            next  = max(next, i + arr[i]);
            if(i == curr){
                jump++;
                curr = next;
            }
            if(curr >= n-1) return jump;
        }
        return -1;
    }
};


int main() {
    return 0;
}