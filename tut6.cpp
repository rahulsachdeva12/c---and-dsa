#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>> n ;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"array is"<<endl;
      for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
    int max=input[0];//fails only when n=0
      for(int i=1;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    cout<<"Max element is\t"<<max;
    return 0;

}