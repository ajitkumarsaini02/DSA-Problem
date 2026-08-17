#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int n=sat.size();
        if (n == 0) return 0;
        sort(sat.begin(),sat.end());
        vector<int> suf(n);
        suf[n-1]=sat[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+sat[i];
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        int x=1;
        int sum=0;
        for(int i=idx;i<n;i++){
            sum+=(sat[i]*x);
            x++;
        }
        return sum;
    }
};

