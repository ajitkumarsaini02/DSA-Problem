#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n-1);

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    unordered_map<int, int> mp;
    for(int x : arr){
        mp[x]++;
    }

    for(int i=1;i<=n;i++){
        if(mp[i] != 1){
            cout<<i<<endl;
            break;
        }
    }
    
}