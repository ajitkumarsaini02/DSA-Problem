#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:

    bool isValid(string &s) {

        int cnt = 0;

        for(char ch : s) {

            if(ch == '(')
                cnt++;

            else if(ch == ')') {

                cnt--;

                if(cnt < 0)
                    return false;
            }
        }

        return cnt == 0;
    }

    vector<string> validParenthesis(string s) {

        vector<string> ans;

        unordered_set<string> vis;
        unordered_set<string> added;

        queue<string> q;

        q.push(s);
        vis.insert(s);

        bool found = false;

        while(!q.empty()) {

            int sz = q.size();

            while(sz--) {

                string cur = q.front();
                q.pop();

                if(isValid(cur)) {

                    if(!added.count(cur)) {

                        ans.push_back(cur);
                        added.insert(cur);
                    }

                    found = true;
                }

                if(found)
                    continue;

                for(int i = 0; i < cur.size(); i++) {

                    if(cur[i] != '(' &&
                       cur[i] != ')')
                        continue;

                    string next =
                        cur.substr(0, i) +
                        cur.substr(i + 1);

                    if(!vis.count(next)) {

                        vis.insert(next);
                        q.push(next);
                    }
                }
            }

            if(found)
                break;
        }

        return ans;
    }
};