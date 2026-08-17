#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == 1) return nums;
        deque<int> dq;
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            while(dq.size() > 0 && nums[i] > nums[dq.back()]) dq.pop_back();
            dq.push_back(i);

            int j = i-k+1;
            while(dq.front() < j) dq.pop_front();
            if(i >= k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ngi(n);
        stack<int> st;

        ngi[n-1] = n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            if(st.empty()) ngi[i] = n;
            else ngi[i] = st.top();
            st.push(i);
        }
        vector<int> ans;

        for(int i=0;i<n-k+1;i++){
            int mx = nums[i];
            int j = i;

            while(j < i+k){
                mx = nums[j];
                j = ngi[j];
            }
            ans.push_back(mx);
        }
        return ans;
    }
};