int size(Node* root)
{
    if(root==NULL)
    return 0;
    int lh=size(root->left);
    int rh=size(root->right);
    int ans=lh+rh+1;
    return ans;
}
int diameter(Node* root,int &dia)
{
    if(root==NULL)
    return 0;
    int lh=diameter(root->left,dia);
    int rh=diameter(root->right,dia);
    int h=max(lh,rh)+1;
    int temp=lh+rh+1;
    dia=max(dia,temp);
    return h;

}

int height(Node* root)
{
    if(root==NULL)
    return 0;
    return max(height(root->right),height(root->left));
}
