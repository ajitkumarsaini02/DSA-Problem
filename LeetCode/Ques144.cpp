#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    return 0;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        if(root != NULL) st.push(root);

        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left != NULL) st.push(temp->left);
            if(temp->right != NULL) st.push(temp->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void Preorder(TreeNode* root, vector<int>&v){
        
        if(root!=NULL){
            v.push_back(root->val);
            Preorder(root->left,v);
            Preorder(root->right,v);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        Preorder(root,ans);
        return ans;
    }
};