#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;

//     // print address 0th index
//     cout<<arr<<endl;
//     cout<<arr+0<<endl;//first relement address
//     cout<<&arr[0]<<endl;
//     cout<<ptr<<endl;

// // 1st index
// cout<<arr+1<<endl;
// cout<<&arr[1]<<endl;p;-


// // print value
// cout<<arr[0]<<endl;
// cout<<*arr<<endl;
// cout<<*(arr+0)<<endl;
// cout<<*ptr<<endl;

// // sare addrss print
// for(int i=0;i<5;i++)
// cout<<arr+i<<endl;

// // print aall the value
// for(int i=0;i<5;i++)
// cout<<*(arr+i)<<endl;

// print all the values
// for(int i=0;i<5;i++)
// cout<<ptr[i]<<endl; // value

// // print all the address
// for(int i=0;i<5;i++)
// cout<<ptr+i<<endl;//adrtees

//  // airthmatic operatin ptr++,ptr--.
//  //print all values
//  for(int i=0;i<5;i++) // 5 se jyda lenge jo array me nhi h to randmly value print kr dega.
//  {
//     cout<<*ptr<< " "<<endl;
//     ptr++;
//  }

//addition 
ptr=ptr+3;
cout<<*ptr<<endl; // ptr ka  jo address h uske hisb se niche count hoga ab
ptr= ptr-2;
cout<<*ptr;
// adree ko kbhi change nhi kr skte  h arr++ ya arr-- nhi hhota h hmesa constant rhti hai.
// is address pr jo valuer hogi vo change kr sktea hai.  ppar address ko change kar skte hai.
// ppointer me alloee h par array me nhi. change krna ptr++ allowed h arr++ nhi.




}