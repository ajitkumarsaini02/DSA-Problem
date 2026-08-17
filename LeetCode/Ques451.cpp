#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(128,0);
        for(char c : s){
            freq[c]++;
        }
        string ans = "";
        while(true){
            int mx = 0;
            int idx = -1;
            for(int i=0;i<128;i++){
                if(freq[i] > mx){
                    mx = freq[i];
                    idx = i;
                }
            }
            if(mx == 0) break;
            for(int i=0;i<mx;i++){
                ans += char(idx );
            }
            freq[idx] = 0;
        }
        return ans;
    }
};