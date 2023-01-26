    int height(Node* root) {

    if(root==NULL) return 0;
    else
        {
        int l=height(root->left);
        int r=height(root->right);
        if(l>r)
            return l+1;
        else
            return r+1;
    }
}