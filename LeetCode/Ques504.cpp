#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool negative = num<0;
        num =abs(num);
        string ans="";
        while(num>0){
            ans=char(num%7 +'0') + ans;
            num/=7;
        }
        if(negative) ans='-'+ans;
        return ans;
    }
};