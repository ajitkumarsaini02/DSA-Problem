#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==1){
                nums[i]--;
                count++;
            }
            else if(nums[i]%3==2){
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};




class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==1 || nums[i]%3==2){
                count++;
            }
        }
        return count;
    }
};
