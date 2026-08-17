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
    void trim(TreeNode* root, int low, int high) {
        if (root == NULL)
            return;

        while (root->left != NULL) {
            if (root->left->val < low) {
                root->left = root->left->right;
            } else if (root->left->val > high) {
                root->left = root->left->left;
            } else
                break;
        }

        while (root->right != NULL) {
            if (root->right->val < low) {
                root->right = root->right->right;
            } else if (root->right->val > high) {
                root->right = root->right->left;
            } else
                break;
        }
        trim(root->left, low, high);
        trim(root->right, low, high);
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode* temp = new TreeNode(INT_MAX);
        temp->left = root;
        trim(temp, low, high);
        return temp->left;
    }
};
