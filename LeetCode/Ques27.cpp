#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                v.push_back(nums[i]);
            }
        }
        nums=v;
        return  v.size();
    }
};


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[k++] = nums[i];
            }
        }
        return  k;
        
        
    }
};



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return  nums.size();
        
        
    }
};