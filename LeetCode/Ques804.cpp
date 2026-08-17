#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        vector<string> morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
        "-..-","-.--","--.."};
        vector<string> unique;
        for(int i=0;i<n;i++){
            string t = "";

            for(char ch : words[i]){
                t += morse[ch-'a'];
            }
            bool check = false;
            for(string s : unique){
                if(s == t){
                    check = true;
                    break;
                }
            }
            if(!check){
                unique.push_back(t);
            }
        }
        return unique.size();
    }
};