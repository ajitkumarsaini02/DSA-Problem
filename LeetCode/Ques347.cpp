#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<queue>
using namespace std;

int main() {
    
    return 0;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        int n = nums.size();
        int size = mx - mn +1;
        vector<int> freq(size, 0);
        for(int i=0;i<n;i++){
            freq[nums[i] - mn]++;
        }
        vector<int> ans;
        for(int j=0;j<k;j++){
            int idx = -1;
            int best = 0;
            for(int i=0;i<size;i++){
                if(best < freq[i]){
                    idx = i;
                    best = freq[i];
                }
            }
            ans.push_back(idx + mn);
            freq[idx] = 0;
        }
        
        
        return ans;
    }
};


class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int x : nums)
            mp[x]++;
        priority_queue<pi, vector<pi>, greater<pi>> q;
        vector<int> ans;
        for (auto x : mp) {
            q.push({x.second, x.first});
            if (q.size() > k) {
                q.pop();
            }
        }
        while (!q.empty()) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
