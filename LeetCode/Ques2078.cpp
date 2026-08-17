#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int maxDistance(vector<int>& c) {
        int n = c.size();
        int i = 0;
        int j = n-1;
        int mx = 0;
        while(j >= 0){
            if(c[i] != c[j]){
                mx = max(mx, abs(i-j));
                break;
            }
            j--;
        }
        i = 0;
        j = n-1;
        while(i < j){
            if(c[i] != c[j]){
                mx = max(mx, abs(i-j));
                break;
            }
            i++;
        }
        return mx;
    }
};

//other
class Solution {
public:
    int maxDistance(vector<int>& c) {
        int n = c.size();
        int j = n-1;
        while (c[0] == c[j]) j--;
        int ans1 = j;
        int i = 0;
        while (c[i] == c[n - 1]) i++;
        int ans2 = n-1-i;

        return max(ans1, ans2);
    }
};