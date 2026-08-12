#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    return 0;
}

class Solution {
	public:
	typedef pair<int, int> pi;
	vector<int> topKFreq(vector<int> &arr, int k) {
		// Code here
		unordered_map<int, int> mp;
		for (int x : arr)
			mp[x]++;
		priority_queue<pi, vector<pi>, greater<pi> > q;
		vector<int> ans;
		for (auto x : mp) {
			q.push({x.second, x.first});
			if (q.size() > k) {
				q.pop();
			}
		}
		while(!q.empty()){
		    ans.push_back(q.top().second);
		    q.pop();
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};