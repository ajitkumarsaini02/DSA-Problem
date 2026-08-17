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
    TreeNode* build(vector<int>& pre, int prelo, int prehi, vector<int>& post, int postlo, int posthi){
        if(prelo > prehi) return NULL;
        TreeNode* root = new TreeNode(pre[prelo]);
        if(prelo == prehi) return root;
        int i = postlo;
        while(i <= posthi){
            if(post[i] == pre[prelo + 1]) break;
            i++;
        }
        int leftCount = i - postlo + 1;
        root->left = build(pre, prelo + 1, prelo + leftCount, post, postlo, i);
        root->right = build(pre, prelo + leftCount + 1, prehi, post, i + 1, posthi - 1);

        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder){
        int n = preorder.size();
        return build(preorder, 0, n - 1, postorder, 0, n - 1);
    }
};
