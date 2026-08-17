#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class MyCircularDeque {
public:
    vector<int> arr;
    int f,b,s,c;
    MyCircularDeque(int k) {
        arr.resize(k);
        c = k;
        f = 0;
        b = k-1;
        s = 0;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        f = (f-1+c) % c;
        arr[f] = value;
        s++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        b = (b+1) % c;
        arr[b] = value;
        s++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        f = (f+1) % c;
        s--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        b = (b-1+c) % c;
        s--;
        return true;
    }
    
    int getFront() {
         return isEmpty() ? -1 : arr[f];
    }
    
    int getRear() {
         return isEmpty() ? -1 : arr[b];
    }
    
    bool isEmpty() {
        return s == 0;
    }
    
    bool isFull() {
        return s == c;
    }
};

