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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        ListNode* frst = head;
        ListNode* scnd = head;
        for(int i=1;i<k;i++){
            frst = frst->next;
        }
        for(int i=1;i<n-k+1;i++){
            scnd = scnd->next;
        }
        swap(frst->val, scnd->val);
        return head;
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* frst = head;
        for(int i=1;i<k;i++){
            frst = frst->next;
        }
        ListNode* scnd = head;
        ListNode* temp = frst;
        while(temp->next != NULL){
            temp = temp->next;
            scnd = scnd->next;
        }
        swap(frst->val, scnd->val);
        return head;
    }
};