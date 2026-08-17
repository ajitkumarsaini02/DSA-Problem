#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    return 0;
}
class MyCircularQueue {
public:
    int rear;
    int front;
    int size;
    vector<int>q;
    MyCircularQueue(int k) {
        q.resize(k+1);
        size=k+1;
        front=k;
        rear=k;
    }
    
    bool enQueue(int value) {
        if((rear+1)%size==front)
            return false;
        rear= (rear+1)%size;
        q[rear]=value;
        return true;  
    }
    
    bool deQueue() {
        if(front==rear)
            return false;
        front=(front+1)%size;
        return true;
    }
    
    int Front() {
        if(rear==front)
            return -1;
        return q[(front+1)%size];    
    }
    
    int Rear() {
        if(rear==front)
            return -1;
        return q[rear%size];    
    }
    
    bool isEmpty() {
        if(front==rear) return true;
        else return false;
    }
    
    bool isFull() {
        if((rear+1)%size==front)
            return true;
        else
            return false;    
    }
};


class MyCircularQueue {
public:
    int f, s, b;
    vector<int> arr;
    MyCircularQueue(int k) {
        f = 0;
        s = 0;
        b = 0;
        arr.resize(k);
    }
    
    bool enQueue(int val) {
        if(s == arr.size()) return false;
        arr[b] = val;
        b++;
        if(b == arr.size()) b = 0;
        s++;
        return true;
    }
    
    bool deQueue() {
        if(s == 0) return false;
        f++;
        if(f == arr.size()) f = 0;
        s--;
        return true;
    }
    
    int Front() {
        if(s == 0) return -1;
        return arr[f];
    }
    
    int Rear() {
        if(s == 0) return -1;
        if(b == 0) return arr[arr.size()-1];
        return arr[b-1];
    }
    
    bool isEmpty() {
        return s == 0;

    }
    
    bool isFull() {
        return s == arr.size();
    }
};

