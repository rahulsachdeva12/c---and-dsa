#include<iostream>
#include "Student1.cpp"
using namespace std;
int main(){
    //creating objects statically
    Student s1;
    Student s2;
    Student s3,s4,s5;
    s1.age=24;
    s1.rollno=101;
    cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;
    //creating objects dynamically
    Student *s=new Student;
    (*s).age=33;
    (*s).rollno=123;
    cout<<(*s).age<<endl;
    cout<<(*s).rollno<<endl;
    //or anothrer way
    Student *t=new Student;
    t->age=16;
    t->rollno=136;
    cout<<t->age<<endl;
    cout<<t->rollno<<endl;
}