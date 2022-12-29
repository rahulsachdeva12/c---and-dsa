#include<iostream>
using namespace std;

 class Student{
    public:
    int age;
    const int rollno;
    int &x;//age reference variable
    public:
    //we will use initialisation list to change const roll no. and reference variable
     Student(int r,int age):rollno(r),age(age),x(this->age){//initialisation list format//rollno(r)is same as int rollno=r;
        //rollno=r
     }
   
};