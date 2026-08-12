#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    void printSubset(vector<int>& nums, vector<int>ans, vector<vector<int>>&finalAns,int idx){
    if(idx==nums.size()){
        finalAns.push_back(ans); 
        return; 
    }
    printSubset(nums,ans,finalAns,idx+1);
    ans.push_back(nums[idx]);
    printSubset(nums,ans,finalAns,idx+1);   
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>> finalAns;
        printSubset(nums,ans,finalAns,0);
        return finalAns;
    }
};