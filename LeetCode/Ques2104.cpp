#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int small = nums[i];
            int large = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                small = min(small, nums[j]);
                large = max(large, nums[j]);
                sum += (large - small);
            }
        }
        return sum;
    }
};



class Solution {
public:
    vector<int> findNse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }

    vector<int> findPse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }

    vector<int> previousGreaterElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> pge(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pge;
    }

    vector<int> nextGreaterElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nge;
    }

    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;

        vector<int> nse = findNse(arr);
        vector<int> pse = findPse(arr);

        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;
            ans += arr[i] * (left * right);
        }
        return ans;
    }

    long long sumOfMax(vector<int>& arr) {
        int n = arr.size();
        vector<int> pge = previousGreaterElement(arr);
        vector<int> nge = nextGreaterElement(arr);

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - pge[i];
            long long right = nge[i] - i;

            ans += 1LL * arr[i] * (left * right);
        }
        return ans;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumOfMax(nums) - sumSubarrayMins(nums);
    }
};

int main() {
    return 0;
}