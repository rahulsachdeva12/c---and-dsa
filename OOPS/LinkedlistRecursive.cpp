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
//INSERTION RECURSIVE FN
Node* InsertionRec(Node *head,int i,int data){
    if(head==NULL){
        return head;
    }
    if(i==0){
    Node *newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
    }
    if(i==1){
        Node *newNode=new Node(data);
        newNode->next=head->next;
        head->next=newNode;
        return head;
    }
    InsertionRec(head->next,i-1,data);
    return head;
}
//DELETION RECURSIVE FN
Node* deletionRec(Node *head,int i){
    if(head==NULL||i<0){
        return head;
    }
  
    // if(i==0){
    //     Node *temp=head;
    //     head= head->next;
    //     delete temp;
    //     return head;
    // }
    if(i==0){
        Node*a=head->next;
       delete head;
        return a;
    }
    head->next=deletionRec(head->next,i-1);
       return head;

}
int main(){
     Node *head=takeInput_better();
    print(head);
    cout<<endl;
    // int index,data;
    // cin>>index>>data;
    // head=InsertionRec(head,index,data);
    // print(head);
    int index;
    cin>>index;
    head=deletionRec(head,index);
    print(head);
}