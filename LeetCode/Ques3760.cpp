#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st;
        int count = 0;
        for(auto c : s){
            if(st.find(c) == st.end()){
                count++;
                st.insert(c);
            }
        }
        return count;
    }
};