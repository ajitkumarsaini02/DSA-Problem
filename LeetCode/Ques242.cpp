#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    
    return 0;
}
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp[t[i]]--;
        }
        
        for(auto& x : mp){
            if(x.second != 0) return false;
        }

        return true;
    }
};



class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp;
        unordered_map<int, int> st;
        if(s.size() != t.size()) return false;
        for(int i=0;i<s.size();i++){
            mp[s[i] -'a']++;
            st[t[i]-'a']++;
        }
        return mp == st;
    }
};



class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){

            if(mp.find(t[i]) != mp.end()){
                mp[t[i]]--;
                if(mp[t[i]] == 0) mp.erase(t[i]);
            }
            else return false;
        }
        if(mp.size() > 0) return false;
        return true;
    }
};

