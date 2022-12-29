#include<iostream>
using namespace std;
#include "Student1.cpp"
int main(){
    Student s1(10,1001);
    Student s2(30,3001);
    Student *s3=new Student(20,2001);
    s2=s1;//copy assignment operator(=)//copy s1 values to s2
    s2.display();
    s1=(*s3);
    s1.display();
    (*s3)=s2;
    s3->display();
    delete s3;//as for s3 destructor is called by using delete
    Student s4=s2;//same as copy constructor  Student s4(s2)
    s4.display();


    // Student s1(10,1001);
    // cout<<"S1: ";
    // s1.display();
    // Student s2(s1);//copy constructor
    // cout<<"S2: ";
    // s2.display();
    // Student *s3=new Student(20,2001);
    // cout<<"S3: ";
    // s3->display();
    // Student s4(*s3);
    // cout<<"S4: ";
    // s4.display();

    // Student *s5=new Student(*s3);
    //  cout<<"S5: ";
    // s5->display();
    // Student *s6=new Student(s1);
    //  cout<<"S6: ";
    // s6->display();
}