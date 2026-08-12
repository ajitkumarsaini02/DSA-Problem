#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        // code here
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(arr[i] < 0) q.push(i);
        }
        
        int i=0;
        while(i <= n-k){
            while(q.size() > 0 && q.front() < i) q.pop();
            if(q.size() == 0 || q.front() >= i+k) ans.push_back(0);
            else ans.push_back(arr[q.front()]);
            i++;
        }
        return ans;
    }
};