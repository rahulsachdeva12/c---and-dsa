#include<iostream>
using namespace std;
void replaceChar(char s[],char c1, char c2){
     if(s[0]=='\0'){
        return;
     }
    if(s[0]==c1){
         s[0]=c2;
    }
    return replaceChar(s+1,c1,c2);
        
        
    }

int main(){

    char s[100];
    cin>>s;
    char c1,c2;
    cin>>c1>>c2;
    replaceChar(s,c1,c2);
    cout<<s<<endl;
    
}