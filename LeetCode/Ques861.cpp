#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<row;i++){
            if(grid[i][0]==0){
                for(int j=0;j<cols;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else  grid[i][j]=0;
                }
            }
        }
        for(int j=0;j<cols;j++){
            int z=0;
            int o=0;
            for(int i=0;i<row;i++){
                if(grid[i][j]==0) z++;
                else o++;
            }
            if(z>o){
                for(int i=0;i<row;i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        int sum=0;
        for(int i=0;i<row;i++){
            int x=1;
            for(int j=cols-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        return sum;
    }
};