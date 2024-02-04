// add node on  start at end using recursion

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
Node *CreateLinkedList(int arr[], int index, int size,Node *prev)
{
    if(index==size){
        return prev;

    }
 Node *temp;
 temp= new Node(arr[index]);
temp->next=prev;
return CreateLinkedList(arr,index+1,size,temp); // jo temp hoga vhi alge vle ke liye previous hoga.


}

int main()
{
    Node *Head;
    Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
   Head= CreateLinkedList(arr,0,5,Head);// kyoki head ke pas vo addess hoga jo last me return kya h. to akhiri address head ko de dengeto vo pahla ban jega.
   // 10 8 6 4 2

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
