#include<iostream>
using namespace std;
#include<queue>
void Reverse(queue<int> &q){
    if(q.empty()){
        return;
    }
    int x=q.front();
    q.pop();
    Reverse(q);
    q.push(x);
    return;
}
int main(){
    queue<int>q;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        q.push(element);
    }
    Reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}