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
Node *evenOddList(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*current=head;
    Node*evenH=NULL;
    Node*evenT=NULL;
    Node*oddH=NULL;
    Node*oddT=NULL;
    while(current!=NULL){
        if(current->data%2!=0){
            if(oddH==NULL){
                oddH=oddT=current;
            }
            else{
                oddT->next=current;
                oddT=current;
            }
        } 
        else{
               if(evenH==NULL){
                evenH=evenT=current;
            }
            else{
                evenT->next=current;
                evenT=current;
            }
        }  
        current=current->next;
    }
    if(oddT!=NULL){
        oddT->next=evenH;
        if(evenT!=NULL){
            evenT->next=NULL;
        }
        return oddH;
    }
    else{
        evenT->next=NULL;
        return evenH;
    }

}
int main(){
    int data;
    Node* head=takeInput_better();
    print(head);
    cout<<endl;
    head=evenOddList(head);
    print(head);
}