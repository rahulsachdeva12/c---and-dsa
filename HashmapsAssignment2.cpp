#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> IntersectionArray(int* a,int n,int*b,int m){
    vector<int>r;
    unordered_map<int,bool> p;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                p[a[i]]=true;
            }
        }
    }
    for(int i=0;i<p.size();i++){
        if(p[a[i]]==true){
            r.push_back(a[i]);
        }
    }
    return r;
}
int main(){
    int a[20];
    int b[20];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>output=IntersectionArray(a,n,b,m);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}