#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
        int count = 0;
        while(!st.empty() && count < st.size()){
            if(st[0] == sd[0]){
                st.erase(st.begin());
                sd.erase(sd.begin());
                count = 0;
            }
            else{
                st.push_back(st[0]);
                st.erase(st.begin());
                count++;
            }
        }
        return st.size();
    }
};



class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sand) {
        queue<int> q;
        int n = st.size();
        for(int i=0;i<n;i++){
            q.push(st[i]);
        }
        int count = 0;
        int i = 0;
        while(q.size() > 0 && count != q.size()){
            if(q.front() == sand[i]){
                count = 0;
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};
