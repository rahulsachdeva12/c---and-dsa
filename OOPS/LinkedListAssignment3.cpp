#include<iostream>
using namespace std;
#include "LinkedList.cpp"

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void removeDuplicates(Node* head) 
{ 
    /* Pointer to traverse the linked list */
    Node* current = head; 
  
    /* Pointer to store the next pointer of a node to be deleted*/
    Node* next_next; 
      
    /* do nothing if the list is empty */
    if (current == NULL) 
    return; 
    if(current->next==NULL){
        return;
}
  
    /* Traverse the list till last node */
    while (current->next != NULL) 
    { 
    /* Compare current node with next node */
    if (current->data == current->next->data) 
    { 
        /* The sequence of steps is important*/        
        next_next = current->next->next; 
        free(current->next); 
        current->next = next_next; 
    } 
    else /* This is tricky: only advance if no deletion */
    { 
        current = current->next; 
    } 
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
    int data;
    Node *head=takeInput_better();
    print(head);
    cout<<endl;
    removeDuplicates(head);
    print(head);
}