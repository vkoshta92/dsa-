// #include<iostream>
// using namespace std;
//  void printEven(int num,int N){
// if(num>N){
//     return;
// }

// cout<<num;

// printEven(num+2,N);

//  }


// int main(){
// printEven(2,11);
// }



//......................
// #include<iostream>
// using namespace std;
// void printEven(int num,int N){
// if(num==N){
//     cout<<num;
//     return;
// }
// cout<<num;
// printEven(num+2,N);
//  }


// int main(){
// int N=17;
// if(N%2==1){
//     N--;
// }
// printEven(2,N);
// }


//..........
#include<iostream>
using namespace std;
void printEven(int N){
if(N==2){
    cout<<2<<endl;
    return;
}
printEven(N-2);
cout<<N<<" ";
 }


int main(){
int N=17;
// cin>>N;
if(N%2==1){
    N--;
}
printEven(N);
}