#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        int n = word.length();
        
        for (string& p : patterns) {
            int m = p.length();
            bool found = false;
           
            for(int i=0;i<=n-m;i++){
                if(word.substr(i, m) == p){
                    found = true;
                    break;
                }
            }
            
            if(found){
                count++;
            }
        }
        return count;
    }
};

