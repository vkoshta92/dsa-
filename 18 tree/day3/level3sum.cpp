// add node
// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
// void Total(Node *root,long int &sum){
//     if(root==NULL){
//         return;
//     }
//     sum+=root->key;
//     Total(root->left,sum);
//     Total(root->right,sum);
// }


// long int sumBT(Node* root)
// {
//     // Code here
//     long int sum=0;
//     Total(root,sum);
//     return sum;
// }

long int sumBT(Node* root)

{
    if(!root)
        return 0;

    return (root->key + sumBT(root->left) + sumBT(root->right));
   
}


