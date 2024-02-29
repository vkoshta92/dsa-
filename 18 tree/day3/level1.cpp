// isme quie  use krenge
// https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      queue<Node*>q;
      q.push(root);
      vector<int>ans;
      Node *temp;
      
      while(!q.empty()){
          temp= q.front();
          q.pop();
          ans.push_back(temp->data);
          
          //agar left side node h to exist krti h to
          if(temp->left){
              q.push(temp->left);
          }
          if(temp->right){
              q.push(temp->right);
          }
        
      }
      
      return ans;
      
    }
};