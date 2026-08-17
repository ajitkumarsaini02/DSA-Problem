#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> minOperations(string b) {
        int n = b.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                if(i != j && b[j] == '1'){
                    sum += abs(i-j);
                }
            }
            ans.push_back(sum);
        }

        return ans;
    }
};