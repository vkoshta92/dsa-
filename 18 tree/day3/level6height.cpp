//  jitna maximum height vla milega phle node se vhi heigt hgu
//  phle left side me  height niklne rgt me  nikenge jo max hoga usi ko 1 me add karenge.

*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
        if(root==NULL){
            return 0;
        }
       return 1+max(height(root->left),height(root->right));
    }
};