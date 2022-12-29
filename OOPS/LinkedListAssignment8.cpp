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
Node *MergeTwoList(Node *a,Node *b){
    Node *result=NULL;
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a;
    }
    if(a->data<=b->data){
            result=a;
            result->next=MergeTwoList(a->next,b);
    }
    else {
        result=b;
        result->next=MergeTwoList(a,b->next);
    }
    return result;
}
int length(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
Node *MergeSort(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    int len=length(head);
    int mid=len/2;
    Node *temp=head;
    for(int i=1;i<mid;i++){
        temp=temp->next;
    }
    Node*h2=temp->next;
    temp->next=NULL;
    Node *h1=head;
    h1=MergeSort(h1);
    h2=MergeSort(h2);
    Node *result=MergeTwoList(h1,h2);
    return result;
    
}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    head=MergeSort(head);
    print(head);
}