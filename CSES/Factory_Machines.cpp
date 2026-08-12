#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n, t;
    cin>>n>>t;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    long long low = 1;
    long long high = *min_element(arr.begin(), arr.end()) * t;

    while(low < high){
        long long mid = low + (high - low) / 2;
        long long prod = 0;
        for(int i=0;i<n;i++) prod += mid / arr[i];
        if(prod >= t) high = mid;
        else low = mid + 1;
    }
    cout<<low;

}