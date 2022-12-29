#include<iostream>
using namespace std;
#include "LinkedList.cpp"

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* takeInput_better(){
    int data;
    cin>>data;
     Node *head=NULL;
     Node* tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
            //or
            //tail=newnode;
        }
        cin>>data;
    }
    return head;
}
Node* deleteNnode(Node *head,int m,int n){
    if(m==0){
        return NULL;
    }
    Node *t1=head;
    while(t1){
    for(int c1=1;c1<m && t1!=NULL;c1++){
        t1=t1->next;
    }
    if(t1==NULL){
        return  head;
    }
    Node *t2=t1->next;
    for(int c2=1;c2<=n && t2!=NULL;c2++){
        Node *temp=t2;
        t2=t2->next;
        free(temp);
    }
    t1->next=t2;
    t1=t2;
}
return head;
}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    int m,n;
    cin>>m>>n;
    head=deleteNnode(head,m,n);
    print(head);
}