void vetical_traversal(Node* root,int d)
{
    if(root==NULL)
    return ;

    queue<pair<Node*,int>>q;
    q.push({root,d});
    map<int,vector<int>>m;
    while(q.empty()==false)
    {
        Node*curr=(q.front()).first;
        int x=(q.front()).second;
        m[x].push_back(curr->data);
        if(curr->left!=NULL)
        q.push({curr->left,d-1});
        if(curr->right!=NULL)
        q.push({curr->right,d+1});

    }
    for(auto it:m)
    {
        for(auto v:it.second)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    
    
}
