#include<iostream>
using namespace std;
void removeDuplicate(char s[]){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]==s[1]){
   
        int i=0;
        for(;s[i]!='\0';i++){
            s[i]=s[i+1];
        }
        removeDuplicate(s);
    }
    removeDuplicate(s+1);
}
int main(){
   char s[100];
    cin>>s;
    removeDuplicate(s);
    cout<<s<<endl;

}