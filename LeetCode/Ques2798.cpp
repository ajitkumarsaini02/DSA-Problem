#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
        int count =0;
        for(int i=0;i<n;i++){
            if(hours[i]>=target){
               count++;
            }
        
        }
        return count;   
    }
};


class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
        int count =0;
        for(int h : hours){
            if(h>=target){
               count++;
            }
        
        }
        return count;   
    }
};
