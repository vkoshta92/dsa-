#include <iostream>
using namespace std;
class Customer
{
string name;
int acc_num;
int balance;
// int *roi;

public:
 // default constructer
Customer(){
// cout<<"hello constructer\n";
name="vishnu";
acc_num=5;
balance=100;
// roi= new int[100]; //
}
// parameterised constructer.
// kyoki name dono ka same h siliye this lgay hbtki vo phchnan sake.

//Constructer Overloading
Customer(string a, int b){
  name=a;
acc_num=b;
balance =50;

}

// inline constructr
inline Customer(string a, int b , int c ):name(a),acc_num(b),balance(c){

}



void display(){
    cout<<name<<" "<<acc_num<<" "<< balance<<endl;
}

};
int main()
{
  Customer A1; // agar yha A2 nhi krenge to vo constructer se uthega data
  Customer A2("Rohit",23,10000);
  Customer A3("Mohit",13);
  A1.display(); //vishnu 5 100
   A2.display(); //Rohit 23 10000
   A3.display();//Mohit 13 15739200   3rd vla utomaic garbage value de dega.


}