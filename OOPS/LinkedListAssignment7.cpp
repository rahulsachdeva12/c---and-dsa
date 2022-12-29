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
int main(){
    int data;
    Node *head1=takeInput_better();
    Node *head2=takeInput_better();
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    Node *head=MergeTwoList(head1,head2);
    print(head);


}