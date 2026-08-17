#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                result.push_back("FizzBuzz");
            }
            else if(i%3==0){
                result.push_back("Fizz");
            }
            else if(i%5==0){
                result.push_back("Buzz");
            }
            else{
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};