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


// delee a node at start
// man lo 2 no node delete karna hai

if(Head!=NULL){
    Node *temp3=Head;
    Head= Head->next;
    delete temp3; // now delete first node
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
