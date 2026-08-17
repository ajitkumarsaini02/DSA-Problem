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
    TreeNode* inOrderPred(TreeNode* root) {
        TreeNode* pred = root->left;
        while (pred->right != NULL) {
            pred = pred->right;
        }
        return pred;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return NULL;
        if (root->val == key) {
            if (root->left == NULL && root->right == NULL)
                return NULL;
            else if (root->left == NULL || root->right == NULL) {
                if (root->left != NULL)
                    return root->left;
                else
                    return root->right;
            } else {
                TreeNode* pred = inOrderPred(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        } else if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else {
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};

int main() {
    return 0;
}