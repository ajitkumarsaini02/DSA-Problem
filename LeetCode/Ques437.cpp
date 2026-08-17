#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    void helper(TreeNode* root, long long sum, long long& count){
        if(root == NULL) return;
        if((long long)(root->val) == sum){
            count++;
        }
        helper(root->left, 1LL * sum-(root->val), count);
        helper(root->right, 1LL * sum-(root->val), count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        long long count = 0;
        helper(root, 1LL * targetSum, count);
        count += (pathSum(root->left, targetSum) + pathSum(root->right, targetSum));
        return count;
    }
};