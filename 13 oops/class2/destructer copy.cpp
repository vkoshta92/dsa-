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
    name= "Rohit";
    data = new int;
    *data=10;
    cout<<"constructer is called"<<endl;
}

// destructer ak bar hi create hota h
~ Customer(){
    delete data; // dynamic ko automatic delete krta h na bhi use kro tb bhi kr dega. che array ho che kuch bhi ho  dunamic ho jo bhi.
cout<<"Destructer is called\n";
}
};



int main(){
Customer A1,A2,A3;
}