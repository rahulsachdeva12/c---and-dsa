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
//Time Complexity=O(n square);
Node *Reverse_LL(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *smallAns=Reverse_LL(head->next);
    Node *temp=smallAns;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    head->next=NULL;
    return smallAns;
}
class Pair{
    public:
    Node *head;
    Node *tail;
};
//Time Complexity=O(n);
//return two values head and tail;
Pair Reverse_LL2(Node *head){
    if(head==NULL||head->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallAns=Reverse_LL2(head->next);
        smallAns.tail->next=head;
        head->next=NULL;
        Pair ans;
        ans.head=smallAns.head;
        ans.tail=head;
        return ans;

}
Node *Reverse_LL_better(Node *head){
    return Reverse_LL2(head).head;
}
//best approach
Node *Reverse_LL_best(Node *head){
     if(head==NULL||head->next==NULL){
        return head;
    }
    Node *smallAns=Reverse_LL(head->next);
    Node *tail;
    tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallAns;
}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    //head=Reverse_LL(head);
    //head=Reverse_LL_better(head);
    head=Reverse_LL_best(head);
    print(head);
}