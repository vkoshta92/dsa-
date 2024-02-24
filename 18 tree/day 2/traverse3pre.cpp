// phle left side bikd karega phir right side ko build krunga.
// agar -1 hua to use skip krkr age vle me cretae krna h
// https://www.geeksforgeeks.org/problems/preorder-traversal/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
// https://www.geeksforgeeks.org/problems/inorder-traversal/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
// https://www.geeksforgeeks.org/problems/postorder-traversal/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
// https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
void preOrder(Node*root){
    if(root=NULL){
        return;
    }
    //node
    //left
    //right
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);


}

void inOrder(Node *root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}
void postOrder(Node *root){
    if(root==NULL){
        return;

    }
    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
}


Node * BinaryTree()
{
    int x;
    // cout<<"enter node";
    cin>>x;
    if(x==-1){
        return NULL;

    }
    Node *temp= new Node(x);

// for left data store
cout<<"enter left child of"<<x<<":";
temp->left= BinaryTree();

// for right child
cout<<"enter right child"<<x<<":";
temp->right= BinaryTree();

return temp;

}



int main()
{
cout<<"enter root node";
Node *root ;
root= BinaryTree();
//tree creation code

//preorder
cout<<" preorder:";
preOrder(root);

//inorder
cout<<"\ninorder:";
inOrder(root);

// post order
cout<<"\n post order";
postOrder(root);

}


// space como-  height of tree
//worrst casr- space - O(n)  // valid binary tree
//time complexoyu- worst case O(n)

