#include<iostream>
using namespace std;
#include "LinkedList.cpp"
//INSERTION
Node* insertNode(Node *head,int index,int data){
    Node *newNode=new Node(data);
    if(index==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    Node *temp=head;
    int count=0;
    while(temp!=NULL&& count<index-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    newNode->next=temp->next;//first connect this as rest linked list gets lost
    temp->next=newNode;
    //OR
    // Node *a=temp->next;
    // temp->next=newNode;
    // newNode->next=a;
    }
    return head;
}


//DELETION
Node* deleteNode(Node *head,int index){
    Node *temp=head;
    if(head==NULL){
        return head;
    }
    if(index==0){
        head=head->next;
        delete temp;
        //OR
        //free(temp);
    }
    else{
    int count=0;
    while(temp!=NULL&&count<index-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        Node*a=temp->next;
        Node *b=a->next;
        temp->next=b;
        delete a;
        //OR
       // free(a);
    }
}
    return head;
}

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

int main(){
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    // int index,data;
    // cin>>index>>data;
    // head=insertNode(head,index,data);
    // print(head);
    int index;
    cin>>index;
    head=deleteNode(head,index);
    print(head);
}