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
// Node A1(23);
Node *Head;// head ke pas adrees hota h isliye * se likhenge
Head= new Node(4);// 4 and uska adrees head me dal diya.

cout<<Head->data<<endl;  //4
cout<<Head->next<<endl;   //0
// cout<<new Node(4);

}