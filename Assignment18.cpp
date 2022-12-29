#include<iostream>
using namespace std;
//fn to remove x from strings
void removeX(char s[]){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]!='x'){
        removeX(s+1);
    }
    else{
        int i=1;
        for(;s[i]!='\0';i++){//removing x and shifting
        s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeX(s);
    }

}
//prog to find length of string
int length(char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    int smallstring=length(s+1);
    return 1+ smallstring;


}
int main(){
    char s[100];
    cin>>s;
 int len=length(s);
    cout<<len<<endl;
    removeX(s);
    cout<<s<<endl;
    len=length(s);
    cout<<len<<endl;

}