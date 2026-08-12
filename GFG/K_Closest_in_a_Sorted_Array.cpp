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
	typedef pair<int, int> pi;
	class cmp {
		public:
		bool operator()(pi a, pi b) {
			
			if (a.first == b.first)
				return a.second > b.second;
			
			return a.first < b.first;
		}
	};
	vector<int> findKClosest(vector<int> arr, int k, int x) {
		// Code here
		int n = arr.size();
		priority_queue<pi, vector<pi>, cmp> q;
		vector<int> ans;
		
		for (int i = 0; i < n; i++) {
			if (arr[i] == x)
				continue;
			q.push({abs(x - arr[i]), arr[i]});
			if (q.size() > k) {
				q.pop();
			}
		}
		while (!q.empty()) {
			ans.push_back(q.top().second);
			q.pop();
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};