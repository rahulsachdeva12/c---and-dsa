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
int findNode(Node *head,int node){
     if(head==NULL){
        return -1;
    }
    else if(head->data==node){
        return 0;
    }
    else if (head->data!=node){
        int smallAns;
        smallAns=findNode(head->next,node);
        if(smallAns!=-1){
            return 1+smallAns;
        }
        else{
            return -1;
        }
    }

}
int main(){
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    int node;
    cin>>node;
    int output=findNode(head,node);
    cout<<output<<endl;

}