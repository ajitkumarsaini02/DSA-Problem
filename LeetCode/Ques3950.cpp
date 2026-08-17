#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    string binary(int n){
        if( n == 0) return "0";
        string s = "";
        while(n > 0){
            s += to_string(n % 2);
            n /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    
    bool consecutiveSetBits(int n) {
        string s = binary(n);
        int count = 0;
        for(int i=1;i<s.size();i++){
            if(s[i] == '1' && s[i-1] == '1'){
                count++;
            }
        }
        return count == 1;
    }
};
