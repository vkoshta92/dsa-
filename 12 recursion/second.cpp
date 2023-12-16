#include<iostream>
using namespace std;
void printNumber(int n){
    if(n==1){
        cout<<1;
        return ;
    }
cout<<n<<endl;
printNumber(n-1);
}
void even(int n){
    if (n==2){
        cout<<2<<endl;
        return;
    }
    cout<<endl<<n<<endl;
    even(n-2);
}



int main(){
  // print n to 1
 printNumber(8);
 //even no 
 even(8);
}

