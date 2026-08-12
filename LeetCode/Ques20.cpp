#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.size()==0){
                    return false;
                }
                if((st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']') ||
                (st.top() == '(' && s[i] == ')')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};