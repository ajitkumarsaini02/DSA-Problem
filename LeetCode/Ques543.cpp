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
    int dia(TreeNode* r, int& maxd) {
        if (r == NULL) return 0;
        int leftd = dia(r->left, maxd);
        int rightd = dia(r->right, maxd);
        maxd = max(maxd, leftd + rightd);
        return 1 + max(leftd, rightd);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxd = 0;
        dia(root, maxd);
        return maxd;
    }
};



class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void helper(TreeNode* root, int &maxDia){
        if(root == NULL) return;

        int dia = levels(root->left) + levels(root->right);
        maxDia = max(dia, maxDia);
        helper(root->left, maxDia);
        helper(root->right, maxDia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root, maxDia);
        return maxDia;
    }
};

int main() {
    return 0;
}