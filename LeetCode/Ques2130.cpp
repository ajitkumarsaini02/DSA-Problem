#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL, *curr=head, *Next=head;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        ListNode* temp = head;
        ListNode* mid = middleNode(head);
        int sum = 0;
        int mx = 0;
        ListNode* rev = reverseList(mid);
        mid->next = NULL;
        while(temp && rev){
            sum = (temp->val + rev->val);
            mx = max(mx, sum);
            rev = rev->next;
            temp = temp->next;
        }
        return mx;
    }
};