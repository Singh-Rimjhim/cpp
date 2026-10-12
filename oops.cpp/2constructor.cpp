
#include<iostream>
using namespace std;
class Student{
public:
string name;
int rollno;
float cgpa;
//Student(){ //Default Constructor
//}
//constustructor is a special member function which is used to initialize the object of class
Student(string s, int r, float c){//Parameterized constructor
name = s;
rollno = r;
cgpa = c;
}
void printStudent(const Student &s){//Copy constructor
    cout<<s.name<<" "<<s.rollno<<" "<<s.cgpa<<endl;
}
};
int main(){
    Student s1("Jhalak", 60, 8.7);
    Student s2("Ritu", 69, 8);
    //DEEP COPY
    Student s3=s1;//Deep copy
    s3.name="Sneha";//sirf naam change hoga baaki copy ho jayega
    Student s4(s2);//Copy constructor
    s4.name="Riya";//sirf naam change hoga baaki copy ho jayega

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<endl;
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.cgpa<<endl;
    cout<<s4.name<<" "<<s4.rollno<<" "<<s4.cgpa<<endl;
}
