#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dist = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] != nums[j]) continue;
                for(int k=j+1;k<nums.size();k++){
                    if(nums[j] == nums[k]){
                        dist = min(dist,2 *(k - i));
                    }
                }
            }
        }
        return dist == INT_MAX ? -1 : dist;
    }
};