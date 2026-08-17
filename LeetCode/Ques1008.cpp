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
    void insertIntoBST(TreeNode* root, int val) {
        if (root == NULL)
            root = new TreeNode(val);
        if (root->val > val) {
            if (root->left == NULL) {
                root->left = new TreeNode(val);
            } else {
                insertIntoBST(root->left, val);
            }
        } else {
            if (root->right == NULL) {
                root->right = new TreeNode(val);
            } else {
                insertIntoBST(root->right, val);
            }
        }
    }

    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root = new TreeNode(pre[0]);
        for (int i = 1; i < pre.size(); i++) {
            insertIntoBST(root, pre[i]);
        }
        return root;
    }
};



class Solution {
public:
    TreeNode* build(vector<int>& pre, int prelo, int prehi, vector<int>& in, int inlo, int inhi){
        if(prelo > prehi) return NULL;
        TreeNode* root = new TreeNode(pre[prelo]);
        if(prelo == prehi) return root;
        int i = inlo;
        while(i <= inhi){
            if(in[i] == pre[prelo]) break;
            i++;
        }
        int leftCount = i - inlo;
        root->left = build(pre, prelo + 1, prelo + leftCount, in, inlo, i - 1);
        root->right = build(pre, prelo + leftCount + 1, prehi, in, i + 1, inhi);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        vector<int> in = pre;
        sort(in.begin(), in.end());
        int n = pre.size();
        return build(pre, 0, n - 1, in, 0, n - 1);
    }
};
