# include<iostream>
using namespace std;
int main(){
// variable ke liye heao memory allocate 
int *ptr= new int;
*ptr=5;
cout<<ptr;
cout<<*ptr;

float *ptr2= new float;
*ptr2=3.6;
cout<<*ptr2<<endl;

int n;
cout<<"enter size of array";
cin>>n;
int *p=new int[n];

 // valuedalo
 for(int i=0;i<n;i++){
    p[i]=  i+1;
 }
 //print kra do
for(int i=0;i<n;i++){
cout<<p[i];
 }

 // delete keyword
 delete ptr;
 delete ptr2;
delete [] p;

}
