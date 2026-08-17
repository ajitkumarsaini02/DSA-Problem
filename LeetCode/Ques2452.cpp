#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& d) {
        vector<string> ans;
        for(auto &s : q){
            for(auto &c : d){
                if(s.size() != c.size()) continue;
                int count = 0;
                for(int i=0;i<s.size();i++){
                    if(s[i] != c[i]) count++;
                    if (count > 2) break;
                }
                if(count <= 2){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& d) {
        vector<string> ans;
        for(auto &s : q){
            for(auto &c : d){
                if(s.size() != c.size()) continue;
                int count = 0;
                for(int i=0;i<s.size();i++){
                    if(s[i] != c[i]) count++;
                }
                if(count <= 2){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};