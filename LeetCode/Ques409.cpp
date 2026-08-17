#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(150, 0);
        for(char c : s){
            freq[c]++;
        }
        int count = 0;
        bool odd = false;
        for(int i=0;i<freq.size();i++){
            if(freq[i] % 2 == 0){
                count += freq[i];
            }
            else{
                count += freq[i] - 1;
                odd = true;
            }
        }
        if(odd) count += 1;
        return count;
    }
};