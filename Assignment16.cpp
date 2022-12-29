#include<iostream>
#include<string.h>
using namespace std;
void pairStar(string s, string& output,int i=0){
    int n= s.length();
    output=output+s[i];
    if(i==n-1){ 
        return;
    }
    
    if(s[i]==s[i+1]){
        output= output+"*";
    }
    pairStar(s,output,i+1);
}
int main(){
    string s;
    cin>>s;
    string output="";
    pairStar(s,output);
    cout<<output<<endl;
}
