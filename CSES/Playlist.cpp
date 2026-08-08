#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int, int> mp;
    int ans = 0;
    int j = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(mp.find(x) != mp.end()){
            j = max(j, mp[x] + 1);
        }
        mp[x] = i;
        ans = max(ans, i - j + 1);
    }
    cout<<ans<<endl;
}