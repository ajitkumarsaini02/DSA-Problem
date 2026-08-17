#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string capitalizeTitle(string title) {
        string s = "";
        string word = "";

        for(int i=0;i<=title.size();i++){
            if(i == title.size() || title[i] == ' '){
                if(word.size() <= 2){
                    for(char c : word)
                        s += tolower(c);
                }
                else {
                    s += toupper(word[0]);

                    for(int j=1;j<word.size();j++)
                        s += tolower(word[j]);
                }
                if(i != title.size())
                    s += ' ';
                word = "";
            }
            else {
                word += title[i];
            }
        }
        return s;
    }
};
