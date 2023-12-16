#include <iostream>
using namespace std;


int sqare(int n){
if(n==1){
    return 1;
}
return n*n+sqare(n-1);
}

int main(){
 int n= 3;
 cout<<sqare(n);
}