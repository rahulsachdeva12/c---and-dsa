#include<iostream>
using namespace std;
int FirstIndex(int a[],int n,int x){
    if(n<=0){
        return -1;
    }
    if(a[0]==x){
        return 0;
    }
    int ans= FirstIndex(a+1,n-1,x);
       if(ans==-1){
        return -1;
       }
       else{
        return ans+1;

       }
    
    
}
int main(){
    int n;
    cin>>n;
    int a[100];
    //cout<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int output=FirstIndex(a,n,x);
    cout<<output<<endl;
    }