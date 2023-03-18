void rightview(Node* root)
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
            if(i==c-1)
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(root->right);



        }
    }
}
void leftview(Node* root)
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
            if(i==0)
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(root->right);



        }
    }
}
