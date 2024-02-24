// https://www.geeksforgeeks.org/problems/preorder-traversal/1?page=1&difficulty[]=-1&category[]=Tree&sortBy=submissions
void pre(Node *root, vector<int> &ans){
    //node 
    //left
    //right
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    pre(root->left,ans);
    pre(root->right,ans);
}

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  pre(root,ans);
  return ans;
}