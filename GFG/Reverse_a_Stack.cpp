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
    void reverseStack(stack<int> &st) {
        // code here
        vector<int> v;
        while(st.size()>0){
            v.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<v.size();i++){
            st.push(v[i]);
        }
    }
};



class Solution {
  public:
    void pushAtBottom(stack<int>& st,int val){
          stack<int> temp;
          while(st.size()>0){
            temp.push(st.top());
            st.pop();
          }
          st.push(val);
          while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
          }
    }
    
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        int t = st.top();
        st.pop();
        reverseStack(st);
        pushAtBottom(st, t);
    }
};