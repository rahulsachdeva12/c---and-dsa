#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;

}
void ReverseString(char input[]){
    int len=length(input);
    int i=0,j=len-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }

}
int main(){
    char name[100];
    cout<< "Enter your name"<<endl;
    //cin>>name;
    cin.getline(name,15);
    cout<< "Name is: "<<name<<endl;
    //cout<<"length is: "<< length(name)<<endl;
    ReverseString(name);
    cout<< "Reverse Name is: "<<name<<endl;
    return 0;

}