#include <iostream>
using namespace std;
class Student
{
    // public me class ke bhar use kar skte hai.
public:
    string name;
    int age, roll_number;
    string grade;
};
int main()
{
    Student S1;
    S1.name = "Rohit";
    S1.age = 10;
    S1.roll_number = 21;
    S1.grade = "A+";
    cout<<S1.age<<" ";

    Student S2;
    S2.name="vishnu";
    S2.age=31;
    S2.roll_number=37;
    S2.grade="B+";
    cout<<S2.age<<" ";
}