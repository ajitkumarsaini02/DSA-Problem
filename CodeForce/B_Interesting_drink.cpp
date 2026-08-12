#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<ll> price(n);
    for(int i=0;i<n;i++) cin>>price[i];

    ll q;
    cin>>q;
    vector<ll> coins(q);
    for(int i=0;i<q;i++) cin>>coins[i];

    sort(price.begin(), price.end());

    for(int i=0;i<q;i++){
        ll money = coins[i];
        ll low = 0;
        ll high = n;
        while(low < high){
            ll mid = low + (high - low) / 2;
            if(price[mid] <= money){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        cout<<low<<endl;
    }
}