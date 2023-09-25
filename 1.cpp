void preorder(BinaryTreeNode<int> *root, vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    ans.push_back(root->val,ans);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
void inorder(BinaryTreeNode<int> *root, vector<int>&ans1)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,ans1);
    ans1.push_back(root->val,ans1);
    inorder(root->right,ans1);
}
void postorder(BinaryTreeNode<int> *root, vector<int>&ans2)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left,ans2);
    postorder(root->right,ans2);
        ans1.push_back(root->val,ans2);

}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>a1,a2,a3;
    inorder(root,a1);
    preorder(root,a2);
    postorder(root,a3);
    a1.push_back(a1);
    a2.push_back(a2);
    a3.push_back(a3);
    return ans;
}