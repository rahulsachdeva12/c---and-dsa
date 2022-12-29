#include<iostream>
using namespace std;
int subs(string input,string output[]){
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    string smallstr=input.substr(1);
    int smallOutput=subs(smallstr,output);
    for(int i=0;i<smallOutput;i++){
        output[i+smallOutput]=input[0]+output[i];
    }
    return 2*smallOutput;

}
int main(){
    string input;
    cin>>input;
    string output[100];
    int count=subs(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    cout<<"No. of subsequences is "<<count<<endl;//2 power n

}