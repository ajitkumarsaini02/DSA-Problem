#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        for(int i=0;i<columnTitle.size();i++){
            num=num*26 +(columnTitle[i]-'A'+1);
        }
        return num;
    }
};