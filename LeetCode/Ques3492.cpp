#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int maxLoad = n*n;
        if(maxLoad * w <= maxWeight){
            return maxLoad;
        }
        for(int i=maxLoad;i>0;i--){
            if(maxLoad * w <= maxWeight){
                return maxLoad;
            }
            else{
                maxLoad--;
            }
        }
        return 0;
    }
};

//other
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int maxLoad = n*n;
        return min(maxLoad, maxWeight / w);
    }
};