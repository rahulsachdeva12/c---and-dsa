#include<iostream>
#include "LinkedList.cpp"
using namespace std;
Node* takeinput(){
    int data;
    cin>>data;
     Node *head=NULL;
        Node *tail=NULL;

    while(data!=-1){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
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
}
int findNode(Node *head,int data){
    // if(temp==NULL){
    //     return -1;
    // }
     Node *temp=head;
    int count=0;
    while(temp->next!=NULL){
        if(temp->data==data){
            return count;
        }
        temp=temp->next;
        count++;
    }
    return -1;
}
int main(){
    Node *head=takeinput();
    print(head);
    cout<<endl;
    int data;
    cin>>data;
    int j=findNode(head,data);
    cout<<j<<endl;
}