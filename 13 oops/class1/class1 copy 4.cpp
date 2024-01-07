#include <iostream>
using namespace std;
class a{

    // concept of pdding char c ko bhi 4 byte le rha h 11 byte dena chiye.
char c;
int b;  // 4 byte
char d;
// double e; 8 byte
};

 int main(){
    a obj1;
    cout<<sizeof(obj1); // 12 , 9 nhi hoga kyoki 9 4se divide nhi h 12 hoga
    // empty class 1 output deta h sie me;

 }