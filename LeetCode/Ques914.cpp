#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b, a%b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        int mx = *max_element(deck.begin(), deck.end());
        vector<int> a(mx+1,0);
        for(int i=0;i<n;i++){
            a[deck[i]]++;
        }
        int g=0;
        for(int i=0;i<=mx;i++){
            if(a[i]>0){
                g = gcd(g, a[i]);
            }
        }
        if(g>=2){
            return true;
        }
        else{
            return false;
        }
    }
};