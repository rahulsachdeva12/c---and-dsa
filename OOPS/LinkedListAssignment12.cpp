#include<iostream>
#include "LinkedList.cpp"
using namespace std;
Node* takeInput_better(){//better time complexity of O(n)
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
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void deleteAlternateNode(Node *head){
    if(head==NULL){
        return ;
    }
    Node *temp=head->next;
    if(temp==NULL){
        return ;
    }
    head->next=temp->next;
    delete temp;
    deleteAlternateNode(head->next);
}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    deleteAlternateNode(head);
    print(head);
}