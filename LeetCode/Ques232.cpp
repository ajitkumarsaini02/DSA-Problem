#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class MyQueue {
public:
    stack<int> st;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.size() == 0){
            st.push(x);
            return;
        }
        else{
            while(!st.empty()){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
            while(!helper.empty()){
                st.push(helper.top());
                helper.pop();
            }
        }
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */



 class MyQueue {
public:
    stack<int> st;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(!st.empty()){
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        helper.pop();
        while(!helper.empty()){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    int peek() {
        while(!st.empty()){
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        while(!helper.empty()){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    bool empty() {
        return st.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */