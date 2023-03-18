void levelorder_line(Node* root)
{
    if(root==NULL)
    return;
    queue<Node*>q;
    q.push(root);
    while(q.size()!=NULL)
    {
        int c=q.size();
        for(int i=0;i<c;i++)
        {
            Node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(root->right);



        }
    }
}
