// ak asa function jo last me cll hoga jab  mai obj ko destroy krne vla hu.
//ye uski memeory ko relise nhi krta h .
// jo resouse dynamic mili h jase pointer se heap me mili h usko delete marta h.
// heap or dynamic memory ko destroy krne ke liye use krte h  distrure ko ,bki stack vle to automatic hi ho jte hai delete main function ke bhar jate hi.
// agar hm destructer nhi  bante h to compiler apne ap bana deta h.
// aur agar hm banate h to compiler nhi banega.



# include  <iostream>
using namespace std;

class Customer{
    string name;
    int *data;

public:
Customer(){
    name="4";
    cout<<"Constructer is"<<name<<endl;
}

Customer(string name ){
this->name= name;
cout<<"Constructer is"<<name<<endl;
}

~Customer(){
    
    cout<<" destructer is"<<name<<endl;
}

};



int main(){
Customer A1("1"), A2("2"),A3("3");
// phle A1 phir A2 phir A3 callee hota h contreucter me
//destructer A3 A2 A1 reverse order me hoga.
// yha dependency hoti h ki syad A3 vla A2 ko use kar rha ho.
Customer *A4= new Customer;
delete A4; // A4 dynamic h usko alag se delete krna hoga vo apne ap delete  nhi hoga.kewal stack   ko hi automatic delete krega.
}