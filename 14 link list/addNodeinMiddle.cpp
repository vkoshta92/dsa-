
// kisi bhi perticuler postion pe node ko insetb krna h

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
int x=3; // jha par insert karana hai. // jse value 3  h to phe node ko 2 bar shift krenge 3rd ke bad insert
int value=30;

Node *mid= Head;
x--;//agar ye nhi use krenge to mra elemnt 3 step lega aur 4 th no pe aa jega hm tesre par lan h to 1 phle se hi minus kr de rhe h.

while(x--){ 
    mid= mid->next; //  jab tk 0 na ho tb tk phle nod ek age bdega  and phir jha add krn ah vha phuchgea 3 h to 2 step hi age jega  2 se 1 1 se 0;
}

Node *temp3= new Node(value);
temp3->next=mid->next; // jha add krne h  uske agle  ka adrees use new vle node  me dal denge.
mid->next=temp3;// midd  me new vle niide ka addrss aa gya h




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
