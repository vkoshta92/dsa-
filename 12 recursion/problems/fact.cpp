#include <iostream>
using namespace std;

//make function
int fact(int n){
    if(n==0|| n==1){ // n==1 ki need nhi h tb bbi 1 ho jega.
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n=5;
    if(n<0){
        cout<<"fact is not possbole\n";
        return 0;
    }
    cout<<fact(n);
}