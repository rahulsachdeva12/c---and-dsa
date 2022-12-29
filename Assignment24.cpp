#include<iostream>
using namespace std;
int UniqueElement(int arr[],int size){
    int res=arr[0];
    for(int i=1;i<size;i++){
        res=res^arr[i];
    }
    return res;

}
int main(){
    // int n;
    // cin>>n;
    int size;
    cin>>size;
    int arr[100];
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }
   int output=UniqueElement(arr,size);
   cout<<output<<endl;
}