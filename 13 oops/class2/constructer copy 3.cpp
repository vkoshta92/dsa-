#include <iostream>
using namespace std;
class Customer
{
string name;
int acc_num;
int balance;


public:

// parameterised constructer.
// kyoki name dono ka same h siliye this lgay hbtki vo phchnan sake.
Customer(string name, int acc_num , int balance){
this->name=name;
this->acc_num=acc_num;
this->balance=balance;
}
//Constructer Overloading
Customer(string a, int b){
  name=a;
acc_num=b;
balance =50;
}





void display(){
    cout<<name<<" "<<acc_num<<" "<< balance<<endl;
}

};
int main()
{
  Customer A1("vishnu",32,10000); // agar yha A2 nhi krenge to vo constructer se uthega data
  Customer A2("Rohit",23,10000);
  Customer A3("Mohit",13);
  A1.display(); //vishnu 5 100
   A2.display(); //Rohit 23 10000
   A3.display();//Mohit 13 15739200   3rd vla utomaic garbage value de dega.


}