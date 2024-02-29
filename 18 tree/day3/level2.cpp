


// digram ko dekhke  shortcut kse pta lagae preorder inorder post order

// preorder: jise sbse phli bar dekho likhte rho dobra nhi likhnge


// inorder- jise dusri bar dekhe use print kare

// post order- jise third bar dekhe ya jise last time dekh rhe ho.



// size of binary trt
// 1+ total noe in left side and + total on right side

// first way
// class Solution {
//   public:
//    void Total(Node* root, int& count) {
//         if (root == nullptr) {
//             return;
//         }
//         count++;
//         Total(root->left, count);
//         Total(root->right, count);
//     }
//     int getSize(Node* root) {
       
//           int count = 0;
//         Total(root, count);
//         return count;
//     }
// };


// second way
class Solution {
  public:
  
    int getSize(Node* root) {
        if(root==NULL){
            return 0;
        }
       
      return (1+getSize(root->left)+getSize(root->right));
    }
};
