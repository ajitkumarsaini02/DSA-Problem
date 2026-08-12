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
	int kthSmallest(vector<int> &arr, int k) {
		// code here
		priority_queue<int> q;
		for (int i = 0; i<arr.size(); i++) {
			q.push(arr[i]);
			
			if (q.size() > k)
				q.pop();
		}
		return q.top();
	}
};



class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        
        return arr[k-1];
    }
};



class Solution {
  public:
    int kthSmallest(vector<int>& arr, int k) {
    int mx = *max_element(arr.begin(), arr.end());
    vector<int> freq(mx + 1, 0);

    for (int x : arr) freq[x]++;

    for (int i = 0; i <= mx; i++) {
        k -= freq[i];
        if (k <= 0) return i;
    }
    return -1;
}
};