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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);

        int mx = head->val;
        ListNode* curr = head;

        while(curr && curr->next){
            if(curr->next->val < mx){
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                mx = curr->val;
            }
        }

        return reverse(head);
    }
};


class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        while(head){
            st.push(head);
            head = head->next;
        }

        ListNode* temp = st.top();
        int mx = temp->val;
        st.pop();
        while(!st.empty()){
            ListNode* t = st.top();
            st.pop();

            if(t->val >= mx){
                t->next = temp;
                temp = t;
                mx = t->val;
            }
        }
        return temp;
    }
};




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        while(head){
            st.push(head);
            head = head->next;
        }

        ListNode* tail = st.top();
        st.pop();
        int mx = tail->val;

        while(!st.empty()){
            ListNode* top = st.top();
            st.pop();

            if(top->val >= mx){
                top->next = tail;
                tail = top;
                mx = top->val;
            } 
        }
        return tail;
    }
};
