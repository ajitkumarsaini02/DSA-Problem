#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    return 0;
}

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        ans[0] = -1;
        st.push(0);
        for(int i=1;i<n;i++){
            
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            if(st.size() == 0){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(i);
        }
        
        vector<int> span(n);
        for(int i=0;i<n;i++){
            span[i] = i - ans[i];
        }
        return span;
    }
};