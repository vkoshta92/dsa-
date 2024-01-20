# include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;

// constructer
Node(int value){
    data= value;
    next=NULL;
}
};


int main(){
// tail me dal lenge value tki bar bar na  hr ak elment par traverse krna pde.
Node *Head,*Tail;// head ke pas adrees hota h isliye * se likhenge
Head=Tail=NULL;
int arr[]={2,4,6,8,10};
//insert value end
for(int i=0;i<5;i++){
// is link list empty
if(Head==NULL){
    Head=new Node(arr[i]);
    Tail= Head;
}
// if link list is not empty
else{
Tail->next= new Node(arr[i]);
Tail= Tail->next;
}

}
//prnt value
Node *newTemp;
newTemp=Head;
while (newTemp)
{
    cout<<newTemp->data<<" ";
    newTemp=newTemp->next;
}


}