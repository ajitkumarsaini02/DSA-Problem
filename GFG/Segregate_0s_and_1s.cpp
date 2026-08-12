#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

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