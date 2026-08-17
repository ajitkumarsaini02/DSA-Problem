#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int mx = nums[nums.size()-1];
        vector<int> freq(mx+1,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>miss;
        for(int i=mn;i<=mx;i++){
            if(freq[i] != 1){
                miss.push_back(i);
            }
        }
        return miss;
    }
};




class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> miss;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int i = mn; i <= mx; i++) {
            if (s.find(i) == s.end()) {
                miss.push_back(i);
            }
        }
        return miss;
    }
};

