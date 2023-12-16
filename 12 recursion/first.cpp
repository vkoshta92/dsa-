// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     // iterative approach
//     for(int i=n;i>0;i--){
//         cout<<i<<" days left for birthday\n";

//     }
//     cout<<"happy birthday";
// }



// recursive l inse approoaxh approach................
// #include<iostream>
// using namespace std;
// void fun3(int n){
//      cout<<n<<" days left for birthday\n";
// }
// void fun2(int n){
//      cout<<n<<" days left for birthday\n";
// }


// void fun1(int n){
//      cout<<n<<" days left for birthday\n";
// }
// void fun0(int n){
//      cout<<n<<" happy birthday\n";
// }
// int main(){
//   int n=3;
//   fun3(3);
//   fun2(2);
//   fun1(1);
//   fun0(0);
// }


// recursion

#include<iostream>
using namespace std;
void fun3(int n){
// base case
if (n==0){
    cout<<"happy birthday\n";
    return;
}


     cout<<n<<" days left for birthday\n";
 fun3(n-1);
}

int main(){
 
 fun3(8);
 
}
// stack overflow agar uski capicity se jyda chle jse condition nalagae 
