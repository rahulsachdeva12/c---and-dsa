#include<iostream>
using namespace std;
#include "StaticMembers.cpp"
int main(){
    Student s1;
    Student s2,s3,s4,s5;
    //cout<<Student :: totalstudents<<endl;
    cout<<Student :: gettotalstudents()<<endl;


//     Student s1;
//     cout<<s1.age<<" "<<s1.rollno<<endl;
//     cout<<s1.totalstudents<<endl;
//     s1.totalstudents=20;
//     Student s2;
//    cout<<s2.totalstudents<<endl;
//     cout<<Student :: totalstudents<<endl;
}