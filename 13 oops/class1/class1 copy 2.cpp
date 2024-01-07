#include <iostream>
using namespace std;
class Student
{
    // public me class ke bhar use kar skte hai.
private:
    string name;
    int age, roll_number;
    string grade;
    // getter and settr function
public:
    void setName(string n)
    {
        if (n.size() == 0)
        {
            cout << "invalid name";
            return;
        }
        name = n;
    }

    void setAge(int a)
    {
        if(a<0 || a>100){
            cout<<"invalid";
            return;
        }
        age = a;
    }

    void setRollNumber(int r)
    {
        roll_number = r;
    }
    void setGrade(string g)
    {
        grade = g;
    }

    // geter
    void getName()
    {
        cout << name << endl;
    }

    void getAge()
    {
        cout << age << endl;
    }

    int getRollNumber()
    {
        return roll_number;
    }

string get_grade(int pin){
    if(pin==123)
    return grade;

    return " ";
}

};
int main()
{
    Student S1;
    S1.setName("Rohit");
    S1.setAge(10);
    S1.setRollNumber(37);
    S1.setGrade("A++");
    S1.getName();               // Rohit
    S1.getAge();                // 10
    cout << S1.getRollNumber()<<endl; // 37
    cout<<S1.get_grade(123)<<endl; // jab pin denge tb hi grade batenga.
}