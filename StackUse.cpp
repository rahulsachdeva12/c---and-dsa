#include<iostream>
#include "StackUsingArray.cpp"
using namespace std;
int main(){
   // StackUsingArray s(4);
   //For integer
//    StackUsingArray<int> s;//for dynamic stack
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     cout<<s.top()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.pop()<<endl;
    
//     cout<<s.size()<<endl;
//     cout<<s.isEmpty()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.isEmpty()<<endl;
//     cout<<s.top()<<endl;
//     cout<<s.pop()<<endl;


    //For char
    StackUsingArray<char> s;//for dynamic stack
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;

}
