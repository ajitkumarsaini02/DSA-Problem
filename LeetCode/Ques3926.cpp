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
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string s = "";
        for(auto& str : chunks){
            s += str;
        }
        unordered_map<string, int> freq;
        string word;
        int n = s.size();
        for(int i=0;i<n;i++){
            char c = s[i];
            if(islower(c)){
                word += c;
            }
            else if(c == '-'){
                bool join = (i > 0 && i+1 < n && islower(s[i-1]) && islower(s[i+1]));
                if(join){
                    word += '-';
                }
                else{
                    if(!word.empty()){
                        freq[word]++;
                        word.clear();
                    }
                }
            }
            else{
                if(!word.empty()){
                    freq[word]++;
                    word.clear();
                }
            }
        }

        if(!word.empty()) {
            freq[word]++;
        }
        vector<int> ans;
        for(auto& q : queries){
            ans.push_back(freq[q]);
        }
        return ans;
    }
};
