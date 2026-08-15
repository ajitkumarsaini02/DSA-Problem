#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    
    return 0;
}
class Solution {
public:
static bool cmp(int x, int y){
    if(x>y)
    return true;
    else
    return false;
}
    int findKthLargest(vector<int>& nums, int k) {
     sort(nums.begin(), nums.end(), cmp);
     return nums[k-1];
    }
};

//other
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < nums.size(); i++) {
            q.push(nums[i]);

            if (q.size() > k)
                q.pop();
        }
        return q.top();
    }
};


