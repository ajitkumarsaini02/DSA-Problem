#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int n=num.size(), carry=0;
        for(int i=n-1;i>=0||k>0;i--){
            int sum=carry;
            if(i>=0) sum+=num[i];
            sum+=k%10;
            k/=10;
            result.push_back(sum%10);
            carry=sum/10;
        }
        if(carry) result.push_back(carry);
        reverse(result.begin(),result.end());
        return result;
    }
};
