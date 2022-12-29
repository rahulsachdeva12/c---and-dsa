#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:"<<endl;
    cin>> n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>> input[i];
    }
    cout<<"array is"<<endl;
     for(int i=0;i<n;i++){
        cout<< input[i]<<endl;
    }
    int sum=0;
      for(int i=0;i<n;i++){
        sum=sum+input[i];
    }
    cout<<"sum is:\t"<<sum;
    return 0;


}