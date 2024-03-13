// https://www.geeksforgeeks.org/problems/mirror-tree/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        // code here
        if(!root)
        return;
        
        Node *temp=root->right;
        root->right=root->left;
        root->left= temp;
        
        //ab swap  kar  enge
        mirror(root->left);
        mirror(root->right);
       
        
        
    }
};