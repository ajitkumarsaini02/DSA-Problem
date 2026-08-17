#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            int count = 0;
            
            while(st.size() > 0 && heights[st.top()] <= heights[i]){
                st.pop();
                count++;
            }

            if(st.size() != 0) count++;
            st.push(i);
            ans[i] = count;
        }
        return ans;
    }
};
