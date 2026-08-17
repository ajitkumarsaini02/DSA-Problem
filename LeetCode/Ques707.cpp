#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class MyLinkedList {
public:
    struct Node {
        int info;
        Node *Next;
    };

    Node *Start;
    
    MyLinkedList() {
        Start = NULL;
    }

    Node* GetNode(int x) {
        Node *p = new Node;
        p->info = x;
        p->Next = NULL;
        return p;
    }

    int get(int index) {
        Node *p = Start;
        int i = 0;

        while (p != NULL) {
            if (i == index) {
                return p->info;
            }
            p = p->Next;
            i++;
        }

        return -1;
    }
    
    void addAtHead(int val) {
        Node *p = GetNode(val);
        p->Next = Start;
        Start = p;
    }
    
    void addAtTail(int val) {
        Node *p = GetNode(val);

        if (Start == NULL) {
            Start = p;
            return;
        }

        Node *q = Start;

        while (q->Next != NULL) {
            q = q->Next;
        }

        q->Next = p;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node *p = Start;
        int i = 0;

        while (p != NULL && i < index - 1) {
            p = p->Next;
            i++;
        }

        if (p == NULL) {
            return;
        }

        Node *n = GetNode(val);

        n->Next = p->Next;
        p->Next = n;
    }
    
    void deleteAtIndex(int index) {
        if (Start == NULL) {
            return;
        }

        if (index == 0) {
            Node *p = Start;
            Start = Start->Next;
            delete p;
            return;
        }

        Node *p = Start;
        int i = 0;

        while (p != NULL && i < index - 1) {
            p = p->Next;
            i++;
        }

        if (p == NULL || p->Next == NULL) {
            return;
        }

        Node *q = p->Next;

        p->Next = q->Next;

        delete q;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */