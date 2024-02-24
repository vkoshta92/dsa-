// phle left side bikd karega phir right side ko build krunga.
// agar -1 hua to use skip krkr age vle me cretae krna h
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



int main(){
cout<<"enter root node";
Node *root ;
root= BinaryTree();

}


// space como-  height of tree
//worrst casr- space - O(n)  // valid binary tree
//time complexoyu- worst case O(n)

