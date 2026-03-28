#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int main(){
    int t;
    cin>>t;
    vector<long long> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long g = arr[0];
        for(int i=1;i<n;i++){
            g = gcd(g, arr[i]);
        }
        for(int i=0;i<prime.size();i++){
            if(g%prime[i] != 0){
                cout<<prime[i]<<endl;
                break;
            }
        }
    }
}