#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <unordered_set>
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
    TreeNode* first = NULL;
    void find(TreeNode* root, int start) {
        if (root == NULL)
            return;
        if (root->val == start) {
            first = root;
            return;
        }
        find(root->left, start);
        find(root->right, start);
    }

    void markParent(TreeNode* root,
                    unordered_map<TreeNode*, TreeNode*>& parent) {
        if (root == NULL)
            return;
        if (root->left)
            parent[root->left] = root;
        if (root->right)
            parent[root->right] = root;
        markParent(root->left, parent);
        markParent(root->right, parent);
    }

    int amountOfTime(TreeNode* root, int start) {
        find(root, start);
        unordered_map<TreeNode*, TreeNode*> parent;
        markParent(root, parent);
        unordered_set<TreeNode*> s;
        s.insert(first);
        queue<pair<TreeNode*, int>> q;
        q.push({first, 0});
        int maxLevel = 0;
        while (!q.empty()) {
            pair<TreeNode*, int> p = q.front();
            q.pop();
            TreeNode* temp = p.first;
            int level = p.second;
            maxLevel = max(maxLevel, level);
            if (temp->left) {
                if (s.find(temp->left) == s.end()) {
                    q.push({temp->left, level + 1});
                    s.insert(temp->left);
                }
            }
            if (temp->right) {
                if (s.find(temp->right) == s.end()) {
                    q.push({temp->right, level + 1});
                    s.insert(temp->right);
                }
            }
            if (parent.find(temp) != parent.end()) {
                if (s.find(parent[temp]) == s.end()) {
                    q.push({parent[temp], level + 1});
                    s.insert(parent[temp]);
                }
            }
        }
        return maxLevel;
    }
};

int main() {
    return 0;
}