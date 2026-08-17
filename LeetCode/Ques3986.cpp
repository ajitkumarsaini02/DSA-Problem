#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    return 0;
}
class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int e1 = stoi(s.substr(0, 2));
        int e2 = stoi(s.substr(3, 2));
        int e3 = stoi(s.substr(6, 2));
        int s1 = stoi(e.substr(0, 2));
        int s2 = stoi(e.substr(3, 2));
        int s3 = stoi(e.substr(6, 2));

        int total1 = e1 * 3600 + e2 * 60 + e3;
        int total2 = s1 * 3600 + s2 * 60 + s3;
        return abs(total1 - total2);
    }
};
