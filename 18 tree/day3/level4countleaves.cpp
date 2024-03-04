//  jiska koi child na ho leaf node
// agar leaf node ho to count ko increase kar do return kr do , 
// agar lef nhi h to left and right me jao 
// https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
//     void CountLeave(Node *root,int &count){
//         if(root==NULL){
//       return;
//   }
// //   leaf node
//        if(!root->left && !root->right){
//            count++;
//            return;
//        }
//        //not leaf
//        CountLeave(root->left,count);
//        CountLeave(root->right,count);
//    }
   
   
// int countLeaves(Node* root)
// {
//   // Your code here
 
//   int count =0;
//   CountLeave(root,count);
//   return count;
// }


int countLeaves(Node* root)
{
  // Your code here
  if(!root){
      return 0;
  }
//  leaf node 
if(!root->left && !root->right){
    return 1;
}
//non leaf
return (countLeaves(root->left)+countLeaves(root->right));
 
}
