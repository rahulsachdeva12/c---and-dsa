#include<iostream>
#include<unordered_map>
using namespace std;
int maxFrequency(int *a,int size){
    int maxf=0;
    int pos=0;
    unordered_map<int,int>seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i])==0){
            seen[a[i]]=1;
    }
    else{
        seen[a[i]]++;
    
        if(seen[a[i]]>=maxf){
            maxf=seen[a[i]];
            pos=i;
    }
    }
}
    return a[pos];
}
int main(){
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxFrequency(a,n);
}