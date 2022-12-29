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

Node* ReverseList(Node *head) {
     Node *previous, *current, *next;
    previous = NULL;
    current = head;
 
    while (current != NULL) {
        next  = current->next;  
        current->next = previous;   
        previous = current;
        current = next;
    }
    return previous;
}
bool Palindromelist(Node *head){
    if(head==NULL||head->next==NULL){
        return true;
    }
    Node *temp=head;
    int len=length(head);
    int mid=len/2;
    while(mid!=1){
        temp=temp->next;
        mid--;
    }
    Node *h2=temp->next;
    temp->next=NULL;
    h2=ReverseList(h2);
    Node *h1=head;
   print(h1);
    cout<<endl;
   print(h2);
    while(h1!=NULL&&h2!=NULL){
        if(h1->data!=h2->data){
             return false;
        }
        h1=h1->next;
        h2=h2->next;
    }
    return true;


}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    if(Palindromelist(head)==1){
    cout<<"true"<<endl;
    }
    else{
    cout<<"false"<<endl;
    }
}