#include<iostream>
using namespace std;
#include<string.h>
#include<stack>

bool areBracketBalanced(string exp){
    stack<char>temp;
    for(int i=0;i<exp.length();i++){
        if(temp.empty()){
            temp.push(exp[i]);
        }
        else if((temp.top()=='{'&& exp[i]=='}')
                ||(temp.top()=='('&& exp[i]==')')
                ||(temp.top()=='['&& exp[i]==']')){
                    temp.pop();
                }
        else{
            temp.push(exp[i]);
        }
    }
    if(temp.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string expression;
    cin>>expression;
    if(areBracketBalanced(expression)){
        cout<<"Balanced";
    }
    else{
        cout<<"Unbalanced";
    }
}
