#include<iostream>
using namespace std;
#include <stack>
void BottomInsert(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
        int a=s.top();
        s.pop();
        BottomInsert(s,x);
        s.push(a);
    
    return;
}
void Reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    Reverse(s);
    BottomInsert(s,x);
}

int main(){
    int size;
    cin>>size;
    stack<int> s;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        s.push(element);
    }
    Reverse(s);
    cout<<"Reversed stack is :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
