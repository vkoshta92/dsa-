# include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;

Node(int value){
    data= value;
    next=NULL;
}
};

int main(){
Node *Head;
Head=NULL;

int arr[]={2,4,6,8,10};
for(int i=0;i<5;i++){
if(Head==NULL){
Head=new Node(arr[i]);
}

else{
    Node *temp;
    temp = new Node(arr[i]);
    temp->next=Head;
    Head=temp;
}
}


//print values
Node *temp2=Head;
while(temp2) {//or temp!=NULL

cout<<temp2->data<<" ";
temp2=temp2->next;

}
}