#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>removeDuplicates(int*a,int size){
    vector<int>output;
    unordered_map<int,bool>seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i])>0){
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
}
int main(){
    int a[]={1,2,3,3,2,1,4,3,5,2,3,6,6,5,7,3,7};
    vector<int>result=removeDuplicates(a,17);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}