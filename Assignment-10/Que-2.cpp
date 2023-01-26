//Hackerrank inorder


    void preOrder(Node *root) { 
        if(root==NULL){
            return;
        }

        preOrder(root->left);
        cout<<root->data<<" ";
        preOrder(root->right);
        

    }
