#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() : val(0) {}
    Node(int _val) : val(_val) {}
    Node(int _val, vector<Node*> _children) : val(_val), children(_children) {}
};

int main() {
    
    return 0;
}


class Solution {
public:
    void PreOrder(Node* root, vector<int>& ans){
        if(root!=NULL){
            ans.push_back(root->val);
            for(int i=0;i<root->children.size();i++){
                PreOrder(root->children[i],ans);
            }
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        PreOrder(root,ans);
        return ans;
    }
};

int main() {
    return 0;
}