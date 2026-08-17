#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    return 0;
}

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nums;
        while(head){
            nums.push_back(head->val);
            head = head->next;
        }

        int n = nums.size();
        vector<int> ans(n, 0);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            if(!st.empty()) ans[i] = nums[st.top()];
            st.push(i);
        }

        return ans;
    }
};


class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp = head;

        while(temp != NULL){
            while(!st.empty() && (st.top())->val < temp->val){
                ListNode* t = st.top();
                st.pop();
                t->val = temp->val;
            }
            st.push(temp);
            temp = temp->next;
        }
        while(!st.empty()){
            st.top()->val=0;
            st.pop();
        }

        vector<int> ans;
        while(head){
            ans.push_back(head->val);
            head = head->next;
        }
        return ans;
    }
};
