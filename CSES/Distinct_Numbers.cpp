#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    // set<int> st;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     st.insert(x);
    // }
    // cout<<st.size()<<"\n";



    //other solution
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    int ans = 1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]) ans++;
    }

    cout<<ans<<endl;
}