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
void ReverseList(Node *head){
    if(head==NULL){
        return ;
    }
        ReverseList(head->next);
        cout<<head->data<<" ";



}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    ReverseList(head);
}