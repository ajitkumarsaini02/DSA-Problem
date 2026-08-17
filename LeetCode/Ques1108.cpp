#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    string defangIPaddr(string a) {
        string s;
        for(int i=0;i<a.size();i++){
            if(a[i]!='.'){
                s+=a[i];
            }
            else{
                s+="[.]";
            }
        }
        return s;
    }
};
