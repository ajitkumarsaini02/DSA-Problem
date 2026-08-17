#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    return 0;
}
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<=0) return false;
        for(long i=1;i*i<=num;i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
    }
};


class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int hi=num;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long m=(long long)mid;
            long long y=(long long)num;
            if(m*m==y) return true;
            else if(m*m>y) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};