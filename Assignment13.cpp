#include<iostream>
#include<string.h>
using namespace std;
string replacePI(string s){
    if(s.length()==0||s.length()==1){
        return s;
    }
    if(s[0]=='p'&&s[1]=='i'){
        string so=replacePI(s.substr(2));
        return "3.14" + so;
    }
    else{
        return s[0]+replacePI(s.substr(1));
    }
}

int main(){
     string s;  
     cin>>s;
     string output=replacePI(s);
     cout<<output<<endl;
     }

