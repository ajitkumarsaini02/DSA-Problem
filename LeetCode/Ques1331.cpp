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
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        unordered_map<int, int> mp;
        int r = 1;
        for(int x : temp){
            if(mp.find(x) == mp.end()){
                mp[x] = r++;
            }
        }

        vector<int> ans;

        for(int x : arr){
            ans.push_back(mp[x]);
        }

        return ans;
    }
};
