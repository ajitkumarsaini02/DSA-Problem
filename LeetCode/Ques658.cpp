#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int> v(k);
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                v[i]=arr[i];
            }
            return v;
        }
        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                v[j]=arr[i];
                j--;
                i--;
            }
            return v;
        }
        int lo=0;
        int hi=n-1;
        bool flag=false;
        int t=0;
        int mid =-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                v[t]=arr[mid];
                t++;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
        int lb=hi;
        int ub=lo;
        if(flag==true){
            lb=mid-1;
            ub=mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[ub]);
            if(d1<=d2){
                v[t]=arr[lb];
                lb--;
            }
            else{
                v[t]=arr[ub];
                ub++;
            }
            t++;
        }
        if(lb<0){
            while(t<k){
                v[t]=arr[ub];
                ub++;
                t++;
            }
        }
        if(ub>n-1){
           while(t<k){
                v[t]=arr[lb];
                lb--;
                t++;
            } 
        }
        sort(v.begin(),v.end());
        return v;
    }
};




class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pi> q;
        vector<int> ans;

        for (int i = 0; i < n; i++) {

            q.push({abs(x - arr[i]), arr[i]});
            if (q.size() > k) {
                q.pop();
            }
        }
        while (!q.empty()) {
            ans.push_back(q.top().second);
            q.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

