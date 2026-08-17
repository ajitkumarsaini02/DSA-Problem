#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>DAT( nums.size()+1, 0);
        for(int i=0;i<nums.size();i++){
            DAT[nums[i]]=1;
        }
        for(int i=0;i<=nums.size();i++){
            if(DAT[i]==0){
                return i;
            }
        }
        return -1;
    }
   
};