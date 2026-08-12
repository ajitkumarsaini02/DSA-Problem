#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int last  = INT_MIN;
        vector<int> ans;
        int i=0, j=0;
        while(i<n && j<m){
            if(a[i] > b[j]) j++;
            else if(a[i] < b[j]) i++;
            else{
                if(a[i] != last){
                    ans.push_back(a[i]);
                    last = a[i];
                }
                i++;
                j++;
            }
        }
       return ans;
    }
};
