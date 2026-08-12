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
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + (max(level(root->left), level(root->right)));
    }

    void nthLevel(TreeNode* root, int curr, int level, vector<int>& v){
        if(root == NULL) return;
        if(curr == level) {
            v.push_back(root->val);
            return;
        }
        nthLevel(root->left, curr+1, level, v);
        nthLevel(root->right, curr+1, level, v); 
    }

    void lOrder(TreeNode* root, vector<vector<int>>& ans){
        int n = level(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            nthLevel(root, 1, i, v);
            if(i % 2 == 0) reverse(v.begin(), v.end());
            ans.push_back(v);
        }
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root, ans);
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool left=true;
        while(!q.empty()){
            int size=q.size();
            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode *x = q.front();
                q.pop();
                int index=(left) ? i : (size-1-i);
                level[index]=x->val;
                if(x->left!=NULL) q.push(x->left);
                if(x->right!=NULL) q.push(x->right);
            }
            left=!left;
            ans.push_back(level);
        }
        return ans;
    }
};