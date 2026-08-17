#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int bestClosingTime(string cust) {
        int n=cust.size();
        vector<int> pre(n + 1, 0);
        vector<int> suf(n + 1, 0);

        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+ ((cust[i]=='N') ? 1 : 0);
        }
        suf[n]=0;
        for(int i=n-1;i>=0;i--){
            suf[i]=suf[i+1] + ((cust[i]=='Y') ? 1 : 0);
        }
        int minPen=n;
        for(int i=0;i<=n;i++){
            pre[i]+=suf[i];
            int pen=pre[i];
            minPen=min(minPen,pen);
        }
        for(int i=0;i<=n;i++){
            int pen=pre[i];
            if(pen==minPen) return i;
        }
        return n;
    }
};
