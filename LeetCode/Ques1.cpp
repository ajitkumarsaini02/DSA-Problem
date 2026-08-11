#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    
    return 0;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp; //to store the value and index of the vector
        int n = nums.size();

        for(int i=0;i<n;i++){
            int rem = target - nums[i];

            if(mp.find(rem) != mp.end()){
                ans.push_back(mp[rem]);
                ans.push_back(i);
                return ans;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};