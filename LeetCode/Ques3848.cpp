#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool isDigitorialPermutation(int n) {
        
        int sum = 0;
        int t = n;
        int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        int temp = t;
        while(temp>0){
            int a = temp%10;
            sum += fact[a];
            temp/=10;
        }
        int freq1[10] = {0};
        temp = t;
        while (temp>0) {
            freq1[temp % 10]++;
            temp /= 10;
        }
        int freq2[10] = {0};
        temp = sum;
        while (temp>0) {
            freq2[temp % 10]++;
            temp /= 10;
        }
        for(int i=0;i<10;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
};