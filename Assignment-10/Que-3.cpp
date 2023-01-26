//leetcode - Postorder traversal

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
        preTraversal(root->right, v);
        v.push_back(root->val);
    }
};