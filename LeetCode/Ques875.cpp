#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    bool check(int speed, vector<int>& p, int h){
        long long  count=0;
        int n=p.size();
        for(int i=0;i<n;i++){
            if(speed>=p[i]) count++;
            else if(p[i]%speed==0) count+=(long long)(p[i]/speed);
            else count+=(long long)(p[i]/speed+1);
        }
        if(count>(long long)h) return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& p, int h) {
        int n=p.size();
        int lo=1;
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,p[i]);
        }
        int hi=mx;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,p,h)==true){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
