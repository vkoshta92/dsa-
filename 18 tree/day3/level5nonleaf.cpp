// jiska ak children atleast ho
// https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if(root==NULL){
            return 0;
        }
        //leaf node
        //  phle leaf noe ko check kr lenge  bd me  phle node se jodte rhebge
        if(!root->left && !root->right){
            return 0;
        }
    
    return 1+ countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
    }
};