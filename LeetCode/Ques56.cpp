#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;

        int n = a.size();
        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back()[1] < a[i][0]){
                ans.push_back(a[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], a[i][1]);
            }
        }
        return ans;
    }
};