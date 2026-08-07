#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size()-1;
        while(i < j){
            if(arr[i] == 1 ){
                swap(arr[i], arr[j]);
                j--;
            }
            else{
                i++;
            }
        }
    }
};

int main() {
    return 0;
}