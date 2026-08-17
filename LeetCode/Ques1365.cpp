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
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]) count++;
            }
            v.push_back(count);
        }
        return v;
    }
};




class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(temp[i]) == mp.end()){
                mp[temp[i]] = i;
            }
        }

        for(int i=0;i<nums.size();i++){
            temp[i] = mp[nums[i]];
        }
        return temp;
    }
};
