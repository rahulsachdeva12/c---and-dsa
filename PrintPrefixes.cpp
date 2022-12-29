#include<iostream>
#include<cstring>
using namespace std;
void PrintPrefix(char input[]){
    for(int i=0;input[i]!= '\0';i++){
        for(int j=0;j<=i;j++){
            cout<<input[j];
        }
        cout<<endl;
    }

}
int main(){
    char input1[]="rahul";
    char input2[]="ram";
    // int len=strlen(input1);//inbuild fn to find length of string
    // cout<<len<<endl;
    // if(strcmp(input1,input2)==0){//to compare 2 string
    //     cout<<"same"<<endl;
    // }
    // else{
    //     cout<<"not same"<<endl;
    // }
    // strcpy(input1,input2);
    // cout<<input1<<endl;
    // cout<<input2<<endl;
    PrintPrefix(input1);
    PrintPrefix(input2);

}