#include<iostream>
#include<math.h>
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
int MiddleElement(Node *head){
    int len=length(head);
    int mid=(len-1)/2;//we will take len-1/2
    Node *temp=head;
    for(int i=1;i<=mid;i++){
        temp=temp->next;
    }
    return temp->data;
}
//or without calculating length
int MiddleElementBetter(Node *head){
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    int j=MiddleElement(head);
    cout<<j<<endl;
}