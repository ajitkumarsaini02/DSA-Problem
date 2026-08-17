#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i=0;i<words.size();i++){
            for(char c: words[i]){
                if(x==c){
                    v.push_back(i);
                    break;
                } 
            }
            
        }
        return v;
    }
};