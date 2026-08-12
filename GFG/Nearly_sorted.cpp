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
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int j = 0;
        priority_queue<int, vector<int>, greater<int> > q;
		for (int i = 0; i<arr.size(); i++) {
			q.push(arr[i]);
			
			if (q.size() > k){
			    arr[j] = q.top();
			    q.pop();
			    j++;
			}
		}
		while(!q.empty()){
		    arr[j] = q.top();
		    q.pop();
		    j++;
		}
    }
};