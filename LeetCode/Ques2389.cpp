#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& query) {
        int n=nums.size();
        int m=query.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
            int len=0;
            for(int j=0;j<n;j++){
                if(query[i]<nums[j]) 
                    break;
                len++;
            }
            ans[i]=len;
        }
        return ans;
    }
};





class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& query) {
        int n=nums.size();
        int m=query.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
            int len=0;
            int lo=0;
            int hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]>query[i]) hi=mid-1;
                else{
                    len=mid+1;
                    lo=mid+1;
                }
            }

            ans[i]=len;
        }
        return ans;
    }
};
