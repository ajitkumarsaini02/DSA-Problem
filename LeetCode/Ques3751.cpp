#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        vector<int> digits(10);
        
        for(int i=num1;i<=num2;i++){
            int sz = 0;
            int n = i;
            while(n != 0){
                digits[sz++] = n % 10;
                n /= 10;
            }
            for(int j=1;j<sz-1;j++){
                if(digits[j] > digits[j-1] && digits[j] > digits[j+1]){
                    count++;
                }
                else if(digits[j] < digits[j-1] && digits[j] < digits[j+1]){
                    count++;
                }
            }
        }
        return count;
    }
};




class Solution {
public:
    vector<int> digits(int n){
        vector<int> ans;
        while(n > 0){
            ans.push_back(n % 10);
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int totalWaviness(int num1, int num2) {
        int count = 0;
        
        for(int i=num1;i<=num2;i++){
            vector<int> digit = digits(i);
            if(digit.size() < 3) continue;
            for(int j=1;j<digit.size()-1;j++){
                if(digit[j] > digit[j-1] && digit[j] > digit[j+1]){
                    count++;
                }
                else if(digit[j] < digit[j-1] && digit[j] < digit[j+1]){
                    count++;
                }
            }
        }
        return count;
    }
};