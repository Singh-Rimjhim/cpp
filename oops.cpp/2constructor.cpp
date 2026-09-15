
#include<iostream>
using namespace std;
class Student{
public:
string name;
int rollno;
float cgpa;
//constustructor is a special member function which is used to initialize the object of class
Student(string s, int r, float c){
name = s;
rollno = r;
cgpa = c;
}
};
int main(){
    Student s1("Jhalak", 60, 8.7);
    Student s2("Ritu", 69, 8);
}
