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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* newHead = head->next;
        while(curr != NULL && curr->next != NULL){
            ListNode* Next = curr->next;
            curr->next = Next->next;
            Next->next = curr;
            if(prev != NULL){
                prev->next = Next;
            }
            prev = curr;
            curr = curr->next;
        }
        return newHead;
    }
};