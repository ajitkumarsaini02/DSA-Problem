#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

class Solution {
public:
    vector<TreeNode*> levelOrder(TreeNode* root) {
        vector<TreeNode*> ans;
        stack<TreeNode*> st;
        if (root != NULL)
            st.push(root);
        while (!st.empty()) {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp);
            if (temp->right != NULL)
                st.push(temp->right);
            if (temp->left != NULL)
                st.push(temp->left);
        }
        return ans;
    }

    void flatten(TreeNode* root) {
        if(root == NULL) return ;
        vector<TreeNode*> ans = levelOrder(root);
        for (int i = 0; i < ans.size()-1; i++) {
            ans[i]->right = ans[i + 1];
            ans[i]->left = NULL;
        }
    }
};



class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        TreeNode* r = root->right;
        TreeNode* l = root->left;
        root->left = NULL;
        root->right = NULL;
        flatten(l);
        flatten(r);
        root->right = l;
        TreeNode* temp = root;
        while(temp->right != NULL) temp = temp->right;
        temp->right = r;
        temp->left = NULL;
        return;
    }
};



class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == NULL)
            return;
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->left != NULL) {
                TreeNode* r = curr->right;
                curr->right = curr->left;

                TreeNode* pred = curr->left;
                while (pred->right != NULL)
                    pred = pred->right;
                pred->right = r;
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }
        TreeNode* temp = root;
        while (temp->right != NULL) {
            temp->left = NULL;
            temp = temp->right;
        }
    }
};