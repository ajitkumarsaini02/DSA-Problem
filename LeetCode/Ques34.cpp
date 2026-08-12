#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    return 0;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target){
        vector<int>v(2);
        v[0]=-1;
        v[1]=-1;
        int lo= 0;
        int hi=arr.size()-1;
        while(lo<=hi){
            int m=lo+(hi-lo)/2;
            if (arr[m] == target) {
                if(m==0){
                    v[0]=m;
                    break;
                }
                else if(arr[m-1]!=target){
                    v[0]=m;
                    break;
                }
                else hi=m-1;
            }
            else if(arr[m]<target) lo=m+1;
            else if(arr[m]>target) hi=m-1;
        }
        lo= 0;
        hi=arr.size()-1;
        while(lo<=hi){
            int m=lo+(hi-lo)/2;
            if (arr[m] == target) {
                if(m==arr.size()-1){
                    v[1]=m;
                    break;
                }
                else if(arr[m+1]!=target){
                    v[1]=m;
                    break;
                }
                else lo=m+1;
            }
            else if(arr[m]<target) lo=m+1;
            else if(arr[m]>target) hi=m-1;
        }
        return v;
    }
};




class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {first, last};
    }
};
