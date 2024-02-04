// add node at end using recursion

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructer
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
Node *CreateLinkedList(int arr[], int index, int size)
{
    // base condition
    if (index == size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size); // jitni bar inex bdega hr bar adress ko  temp ke next me dal denge   last vle me nul aa jega.
}

int main()
{
    Node *Head;
    Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    Head = CreateLinkedList(arr, 0, 5);

//deletee fromlast
///linked list doesnt exit
//linked list ,1 node 
//linked list >1
// 1 node exist

if(Head!=NULL)
{
    // only one node is presnt 
if(Head->next==NULL){
Node *temp4=Head;
delete Head;
Head= NULL;
}

    // more tahn 1 node is present.
else{
    Node *curr=Head;
    Node *prev= NULL;
    while(curr->next!=NULL){
prev=curr;
curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;

}



}




    // print values
    Node *temp2;
    temp2 = Head;
    while (temp2)
    { // or temp!=NULL

        cout << temp2->data << " ";
        temp2 = temp2->next;
    }
}

// time complexity O(n)
// space cimplexity O(n)- kyoki stack use kar rhe hai.
