#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
	public:
	int kthLargest(vector<int> &arr, int k) {
		// code here
		priority_queue<int, vector<int>, greater<int> > q;
		for (int i = 0; i<arr.size(); i++) {
			q.push(arr[i]);
			
			if (q.size() > k)
				q.pop();
		}
		return q.top();
	}
};