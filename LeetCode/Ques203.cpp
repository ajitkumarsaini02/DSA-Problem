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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return NULL;
        }
        while(head != NULL && head->val == val){
            head = head->next;
        }
        ListNode* t = head;
        ListNode* temp = head;
        while(t != NULL && t->next != NULL){
            if(t->next->val == val){
                t->next = t->next->next;
            }
            else{
                t = t->next;
            }
            
        }
        return head;
    }
};