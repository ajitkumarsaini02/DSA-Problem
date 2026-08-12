#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    
    return 0;
}
class MinStack {
public:
    stack<long long> st;
    long long mn;
    MinStack() {
        mn = LLONG_MAX;
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            mn = value;
        }
        else if(value >= mn){
            st.push(value);
        }
        else{
            st.push(2LL * value - mn);
            mn = value;
        }
    }
    
    void pop() {
        if(st.top() < mn){
            mn = 2LL * mn - st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top() < mn) return mn;
        else return st.top();
    }
    
    int getMin() {
        return mn;
    }
};

class MinStack {
public:
    stack<int> st;
    stack<int> helper;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(helper.empty() || value < helper.top()) helper.push(value);
        else helper.push(helper.top());
    }
    
    void pop() {
        st.pop();
        helper.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helper.top();
    }
};
