#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long x;
    cin>> x;
    long long best = x;
    long long curr = x;
    for (int i = 1; i < n; i++){
        cin>> x;
        curr = max(x, curr + x);
        best = max(curr, best);
    }

    cout << best << endl;
}