#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
	public:
	int minProd(vector<int>& arr) {
		// code here
		int cn = 0, cz = 0, cp = 0;
		int prod_pos = 1, prod_neg = 1;
		int maxNeg = INT_MIN;
		
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] < 0) {
				cn++;
				prod_neg *= arr[i];
				maxNeg = max(maxNeg, arr[i]);
			}
			else if (arr[i] == 0)
				cz++;
			else {
				cp++;
				prod_pos *= arr[i];
			}
		}
		
		if (cn == 0) {
			if (cz > 0)
				return 0;
			else {
				return *min_element(arr.begin(), arr.end());
			}
		}
		else {
			if (cn % 2 == 0) {
				return (prod_neg / maxNeg) * prod_pos;
			}
			else {
				return prod_neg * prod_pos;
			}
		}
	}
};