#include<iostream>
using namespace std;
#include "Student1.cpp"
int main(){
    //statically
    Student s1;
    s1.rollno=101;
   // s1.display();
    cout<<"s1 key: "<<s1.getkey()<<" "<<s1.rollno<<endl;


    //dynamically
    Student *s=new Student;
   // (*s).display();
    (*s).rollno=122;
    cout<<"s key: "<<(*s).getkey()<<" "<<(*s).rollno<<endl;
 
    s->rollno=134;
   // s->display();
    cout<<"s key: "<<s->getkey()<<" "<<s->rollno<<endl;
    Student *t=new Student;
    Student p;
    Student d;
    (*t).setkey(23,123);
    p.setkey(24,123);
    d.setkey(25,23);
    d.display();
    (*t).display();
    p.display();


}