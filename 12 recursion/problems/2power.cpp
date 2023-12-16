#include <iostream>
using namespace std;

//make function
int power(int num,int n){
   if(n==1){
    return num;
   }
   return num * power (num,(n-1));
}

int main(){
    int num=2;
    int n=10;
    cout<<power(num,n);
   
}