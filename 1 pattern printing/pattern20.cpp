#include <iostream>
using namespace std;
int main(){
int row,col;
for(row=1;row<=4;row++){
   

    for(col=1;col<=4-row;col++){
 cout<<" ";
    }
   
  for(col=1;col<=row;col++){
        cout<<"*";
    }
  for(col=1;col<=row-1;col++){
        cout<<"*";
    }


 
   cout<<endl;
}
// phle adha banenge phir adha
for(row=4;row>=1;row--){
   

    for(col=1;col<=4-row;col++){
 cout<<" ";
    }
   
  for(col=1;col<=row;col++){
        cout<<"*";
    }
for(col=1;col<=row-1;col++){
        cout<<"*";
    }

 
   cout<<endl;
}





}