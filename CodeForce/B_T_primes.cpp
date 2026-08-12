#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2;i*i<=n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool isTprime(long long n){
    long long root = sqrt(n);
    if(root * root != n) return false;
    return isPrime(root);
}
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(isTprime(v[i])){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}