#include<iostream>
using namespace std;
//default arguments
int sum(int arr[],int size,int index=0){//index is default argument with default value 0
    int sum=0;
    for(int i=index;i<size;i++){
        sum=sum+arr[i];
        
    }
    return sum;

}
//inline function
inline int max(int a,int b){//inline fn is used when body of fn has one line only
    return (a>b)?a:b;//in inline fn this line goes to int main and program does not enter body of fn
}
int main(){
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // cout<<sum(arr,5)<<endl;//both are correct as index is default
    // cout<<sum(arr,5,2)<<endl;
    int a,b;
    cin>>a>>b;
    int c=max(a,b);
    cout<<"max is: "<<c<<endl;
    int x,y;
    cin>>x>>y;
    int z=max(x,y);
    cout<<"max is: "<<z<<endl;

}
