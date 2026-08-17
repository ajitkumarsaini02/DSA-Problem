#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int sumDigit(int n){
        int sum = 0;
        while(n > 0){
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i == sumDigit(nums[i])){
                return i;
            }
        }
        return -1;
    }
};