// #include<iostream>
// using namespace std;
// void printNumber(int n){

// }
// void print(int num,int N){

// // base case
// if(num==N){
//     cout<<num<<endl;
//     return;
// }

// cout<<num<<endl;
// print(num+1,N);
// }


// int main(){
// // print number from 1 to n

// print(1,15);
// }



// one parameter approach
#include<iostream>
using namespace std;
 void print(int num){
if(num==1){
    cout<<1;
    return;
}
print(num-1);
cout<<num;
}


int main(){
print(5);
}
