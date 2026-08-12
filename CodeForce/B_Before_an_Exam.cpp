#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int d, sumTime;
    cin>>d>>sumTime;
    vector<int> mn(d), mx(d);
    int maxSum = 0;
    int minSum = 0;

    for(int i = 0; i < d; i++) {
        cin >> mn[i] >> mx[i];
        maxSum += mx[i];
        minSum += mn[i];
    }

    if(sumTime < minSum || sumTime > maxSum){
        cout<<"NO\n";
        return 0;
    }
    
    vector<int> ans = mn;
    int remaining = sumTime - minSum;
    for(int i = 0; i < d; i++) {
        int extra = mx[i] - mn[i];
        int add = min(remaining, extra);
        ans[i] += add;
        remaining -= add;
    }

    cout << "YES\n";
    for(int x : ans) cout << x << " ";
}
