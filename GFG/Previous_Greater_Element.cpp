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
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n);
        st.push(arr[0]);
        ans[0] = -1;
        for(int i=1;i<n;i++){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(st.size() == 0){
                ans[i] = -1;
            }else{
                ans[i] = st.top();   
            }
            st.push(arr[i]);
        }
        return ans;
    }
};