#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
        vector<int> ans(101,0);
        for(int i=0;i<n;i++){
            if(ans[bulbs[i]]  == 0){
                ans[bulbs[i]] = 1;
            }
            else{
                ans[bulbs[i]] = 0;
            }
        }
        vector<int> res;
        for(int i=0;i<=100;i++){
            if(ans[i] == 1){
                res.push_back(i);
            }
        }
        return res;
    }
};