#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        // code here
        vector<int>prefix(n);
        vector<int>sufix(n);
        prefix[0] = arr[0];
        for(int i=1;i<n;i++){
            prefix[i] = arr[i] + prefix[i-1];
        }
        sufix[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--){
            sufix[i] = arr[i] + sufix[i+1];
        }
        
        for(int i=0;i<n;i++){
            if(sufix[i] == prefix[i]){
                return i;
            }
        }
        return -1;
    }
};