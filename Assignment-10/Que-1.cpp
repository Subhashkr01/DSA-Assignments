//leetcode - Binary-tree-inorder-traversal

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preTraversal(root, v);
        return v;
    }
    void preTraversal(TreeNode* root, vector<int>& v){
        if(!root) return;
        preTraversal(root->left, v);
        v.push_back(root->val);
        preTraversal(root->right, v);
    }
};