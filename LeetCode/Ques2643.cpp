#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = 0;
        int maxOne = 0;

        for(int i=0;i<mat.size();i++){
            int count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > maxOne){
                maxOne = count;
                row = i;
            }
        }
        return {row, maxOne};
    }
};
