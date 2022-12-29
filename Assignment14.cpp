#include<iostream>
#include<string.h>
using namespace std;
string removeX(string s){
    int n=s.length();
    if(n==0){
        return "";
    }
    if(s[0]=='x'){
        return removeX(s.substr(1));
    }
    else{
         return s[0]+ removeX(s.substr(1));
    }
}
int main(){
     string s;  
     cin>>s;
     string output=removeX(s);
     cout<<output<<endl;
          }