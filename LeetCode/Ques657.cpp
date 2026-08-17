#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    bool judgeCircle(string m) {
        int x = 0, y = 0;
        for(char c : m){
            if(c == 'R'){
                x++;
            }
            else if(c == 'L'){
                x--;
            }
            else if(c == 'U'){
                y++;
            }
            else{
                y--;
            }
        }
        return (x == 0 && y == 0);
    }
};