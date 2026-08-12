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
	int minCost(vector<int>& arr) {
		// code here
		priority_queue<int, vector<int>, greater<int>> q;
		
		for (int x: arr) {
			q.push(x);
		}
		
		int cost = 0;
		
		while(q.size() > 1){
		    int x = q.top();
		    q.pop();
		    int y = q.top();
		    q.pop();
		    int sum = x + y;
		    q.push(sum);
		    cost += sum;
		}
		return cost;
	}
};