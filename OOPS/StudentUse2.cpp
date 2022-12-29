#include<iostream>
using namespace std;
#include "Student1.cpp"
int main(){
   Student s1;
   s1.display(); 
   Student *s2=new Student(10);
   s2->display();
      Student s3(11,123);
   s3.display();
   cout<<"address of s3 is: "<<&s3<<endl; 
}