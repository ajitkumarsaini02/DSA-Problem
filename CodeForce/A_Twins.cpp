#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
    cin>>n;
    vector<int> arr(n);
    int sum = 0;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr.rbegin(), arr.rend());

    int count = 0;
    int coin = 0;
    for(int i=0;i<n;i++){
        coin += arr[i];
        count++;
        int remain = sum - coin;
        if(coin > remain) break;
    }
    cout<<count;
}
