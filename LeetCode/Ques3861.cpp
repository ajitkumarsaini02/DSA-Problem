#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int idx = -1;
        int mn = INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(itemSize <= capacity[i]){
                if(mn > capacity[i]){
                    mn = min(mn, capacity[i]);
                    idx = i;
                }
            }
        }
        return idx == -1 ? -1 : idx;
    }
};