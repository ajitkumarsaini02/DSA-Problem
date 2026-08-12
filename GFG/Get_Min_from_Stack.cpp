#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    return 0;
}

class SpecialStack {
  public:
    stack<long long> st;
    long long mn;
    SpecialStack() {
        // Define Stack
        mn = LLONG_MAX;
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(st.empty()){
            st.push(x);
            mn = x;
        }
        else if(x >= mn) st.push(x);
        else{
            st.push(2LL * x - mn);
            mn = x;
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()) return;
        if(mn > st.top()) mn = 2LL * mn - st.top();
        st.pop();
        
        if (st.empty()) mn = LLONG_MAX;
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty()) return -1;

        if(mn > st.top()) return mn;
        return st.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(st.empty()) return -1;
        return mn;
    }
};