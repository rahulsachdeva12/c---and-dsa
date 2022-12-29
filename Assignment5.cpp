#include<iostream>
using namespace std;
bool num_inarr(int a[],int n, int x){
    bool so;
     if(n==0){
        return false;
    }
    if(a[n]==x){
        return true;
    }
    else{
    so=num_inarr(a,n-1,x);
    }
    return so;
}
int main(){
    int n;
    cin>>n;
    int a[100];
    //cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
     if(num_inarr(a, n, x)==1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

}