#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n <= 2){
            return false;
        }
        int peak = -1;
        for(int i=1;i<n-1;i++){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                peak = i;
                break;
            }
        }
        if(peak == -1) return false;
        for(int i=1;i<=peak;i++){
            if(arr[i] <= arr[i-1]) return false;
        }
        for(int i=peak+1;i<n;i++){
            if(arr[i] >= arr[i-1]) return false;
        }
        return true;
    }
};