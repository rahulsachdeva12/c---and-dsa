#include<iostream>
using namespace std;
bool is_sorted(int a[],int size){
    if(size==0||size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool so= is_sorted(a+1,size-1);
    return so;
    // if(so){return true;
    // }
    // else{
    //     return false;
    // }


}
int main(){
    int n;
    cin>>n;
    int a[100];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array is"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<is_sorted(a,n);
}