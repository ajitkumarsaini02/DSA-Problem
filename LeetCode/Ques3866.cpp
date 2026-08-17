#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        vector<int> freq(101, 0);
        for(int n : nums){
            freq[n]++;
        }
        for(int i : nums){
            if(i % 2 == 0 && freq[i] == 1){
                return i;
            }
        }
        return -1;
    }
};