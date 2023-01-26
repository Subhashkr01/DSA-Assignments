 void levelOrder(Node * root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* root = q.front();
        q.pop();
        cout << root->data << ' ';
        if (root->left) q.push(root->left);
        if (root->right) q.push(root->right);
    }

}