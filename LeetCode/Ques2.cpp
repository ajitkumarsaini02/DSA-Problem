#include <iostream>
#include <vector>
#include <algorithm>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* t = temp;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0){
            int sum = carry;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            t->next = new ListNode(sum % 10);
            t = t->next;
        }
        return temp->next;
    }
};