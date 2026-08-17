#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        int n= nums.size();
        long long ans = 0;
        unordered_set<int> st(nums.begin(), nums.end());

        for(int x : nums){
            int best  = x;
            for(int j=1;j*j<=x;j++){
                if(x % j == 0){
                    if(st.count(j))
                        best = min(best, j);

                    int other = x / j;
                    if(st.count(other)){
                        best  = min(best, other);
                    }
                }
            }
            ans += best;
        }
        return ans;
    }
};
