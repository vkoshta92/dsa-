#include <iostream>
using namespace std;

//make function
int sum(int n){
    if(n==1){ 
        return 1;
    }
    return n+sum(n-1);
}

int main(){
    int n=15;
    if(n<0){
        cout<<"sum is not possbole\n";
        return 0;
    }
    cout<<sum(n);
}