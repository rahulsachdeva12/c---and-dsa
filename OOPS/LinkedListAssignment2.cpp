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
int length(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
Node* AppendList(Node *head,int index){
    int len=length(head);
    int count=len-index;
    Node *temp=head;
    for(int i=1;i<count;i++){
        temp=temp->next;
    }
    Node *head2=temp->next;
    temp->next=NULL;
    Node *tail=head2;
    for(int i=count;i<len;i++){
        tail=tail->next;
    }
    tail->next=head;
    return head2;
}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    int index;
    cin>>index;
    head=AppendList(head,index);
    print(head);
}