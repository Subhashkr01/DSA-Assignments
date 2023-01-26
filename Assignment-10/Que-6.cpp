//Hackerrank - Preorder 

 void preOrder(Node *root) {  //Preorder in Hackkerrank via recursion
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
        

    }