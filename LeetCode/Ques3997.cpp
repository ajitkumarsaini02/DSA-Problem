#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int count = 0;
    int maxNode(TreeNode* root){
        if(root == NULL) return INT_MIN;

        int leftMax = maxNode(root->left);
        int rightMax = maxNode(root->right);
        int mx = max({root->val, leftMax, rightMax});

        if(root->val == mx) count++;
        return mx;
    }
    int countDominantNodes(TreeNode* root) {
        maxNode(root);
        return count;
    }
};
